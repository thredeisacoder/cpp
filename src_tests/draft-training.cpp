#include <iostream>
#include <string.h>
#include <math.h>
#include <random>
#include <ctime>

struct TableOfContent
{
	string ISBN;
	string BookName;
	string NumOfPage;
	string Author;
	string PublicYear;
	string Genre;

	BookList dms;
};

struct TableOfContentList
{
	TableOfContent *ds[MAX] = {NULL};
	int size = 0;
};
void releaseMemory(TableOfContentList &data)
{
	for (int i = 0; i < data.size; i++)
	{
		delete data.ds[i];
		data.ds[i] = nullptr; // Đặt con trỏ thành nullptr để tránh truy cập bộ nhớ sau khi giải phóng
	}
	data.size = 0; // Đặt kích thước về 0 để đánh dấu danh sách rỗng
}

int compare(TableOfContentList tl, TableOfContent data)
{
	for (int i = 0; i < tl.size; i++)
	{
		if (tl.ds[i]->ISBN == data.ISBN)
		{
			return 0;
		}
		else if (tl.ds[i]->BookName == data.BookName && tl.ds[i]->Author == data.Author && tl.ds[i]->Genre == data.Genre)
		{
			return 0;
		}
	}
	return 1;
} // done

int addTail(TableOfContentList &tl, TableOfContent data)
{
	if (tl.size == MAX)
	{
		return 0;
	}
	tl.ds[tl.size] = new TableOfContent(data);
	tl.size++;
	return 1;
} // done
int themTheoThuTuTheLoai(TableOfContentList &tl, TableOfContent data)
{
	int locate;
	if (tl.size == 0)
	{
		return addTail(tl, data);
	}
	if (tl.size < MAX && compare(tl, data) != 0)
	{
		for (locate = 0; locate < tl.size; locate++)
		{
			if (tl.ds[locate]->Genre > data.Genre || (tl.ds[locate]->Genre == data.Genre && tl.ds[locate]->BookName > data.BookName))
			{
				break;
			}
		}
		for (int i = tl.size; i > locate; i--)
		{
			tl.ds[i] = tl.ds[i - 1];
		}
		tl.ds[locate] = new TableOfContent(data);
		tl.size++;
	}
	else
	{
		return 0;
	}
	return 1;
} // done

TableOfContent *searchByName(TableOfContentList tl, string input)
{
	for (int i = 0; i < tl.size; i++)
		if (tl.ds[i]->BookName == input)
		{
			return tl.ds[i];
		}
	return NULL;
}

TableOfContentList saveToSearch(TableOfContentList tl, string input)
{
	TableOfContentList tmp;
	int index = 0;
	for (int i = 0; i < tl.size; i++)
	{
		if (tl.ds[i]->BookName == input)
		{
			tmp.size++;
			tmp.ds[index] = tl.ds[i];
			index++;
		}
	}
	return tmp;
}
TableOfContent *searchByISBN(TableOfContentList tl, string data)
{
	if (tl.size == 0)
		return NULL;
	for (int i = 0; i < tl.size; i++)
	{
		if (tl.ds[i]->ISBN == data)
		{
			TableOfContent *p = tl.ds[i];
			tl.ds[i] = NULL;
			return p;
		}
	}
	return NULL;
}
struct Book
{
	string BookID;
	int BookStatus;
	string BookLocation;
};
/////////////////////////////////////////////Danh muc sach/////////////////////////////////////////////////
struct nodeB
{
	Book data;
	nodeB *next = nullptr;
};

struct BookList
{
	nodeB *head = nullptr;
	nodeB *tail = nullptr;
	int size = 0;
	int random = rand() % 10 + 1;
	TableOfContent toc;
};
void generateID(BookList &bookList)
{
	int min = 1000;
	int max = 10000;
	string a[MAX] = {"DA"};
	bool b[MAX] = {false};
	srand(time(0)); // Sử dụng thời gian hiện tại làm seed

	nodeB *p = bookList.head;
	int i = min;

	while (p && i < max)
	{
		int tmp;
		do
		{
			tmp = rand() % (max - min) + min;
		} while (b[tmp]);
		a[i] = "DA" + to_string(tmp);
		b[tmp] = true;

		p->data.BookID = a[i]; // Gán BookID cho cuốn sách trong danh sách
		p = p->next;
		i++;
	}
}

BookList *createBookList()
{
	BookList *list = new BookList;

	for (int i = 0; i < list->random; i++)
	{
		nodeB *newNode = new nodeB;
		generateID(*list);
		newNode->data.BookStatus = 0;
		newNode->data.BookLocation = " " + to_string(i);
		// rest of adding node to list
	}
	return list;
}

int main() {
TableOfContentList tableOfContentsList;
// Add some sample table of contents
TableOfContent toc1;
toc1.ISBN = "12345";
toc1.BookName = "Book 1";
// Set other fields
TableOfContent toc2;
toc2.ISBN = "67890";
toc2.BookName = "Book 2";
// Set other fields
addTail(tableOfContentsList, toc1);
addTail(tableOfContentsList, toc2);
// Test search functions
TableOfContent* result = searchByName(tableOfContentsList, "Book 1");
if(result != NULL) {
// Book found
}
// Test sorting function

TableOfContent toc3;
// Set fields
themTheoThuTuTheLoai(tableOfContentsList, toc3);
// Print list to check order
BookList* bookList = createBookList();
// Test book list functions
// Print book list
releaseMemory(tableOfContentsList);
delete bookList;
return 0;
}