cmake_minimum_required(VERSION 3.23)
project(project C)

set(CMAKE_C_STANDARD 99)

add_executable(seqList-static linear/sequencetable/seqList-static.c)
add_executable(seqList-dynamic linear/sequencetable/seqList-dynamic.c)

add_executable(SingleLinkedList linear/linkedlist/SingleLinkedList.c)
add_executable(SingleLinkedList-head linear/linkedlist/SingleLinkedList-head.c)
add_executable(DoubleLinkedList linear/linkedlist/doublelinkedlist/DoubleLinkedList-head.c)
add_executable(cycleLinkedList linear/linkedlist/doublelinkedlist/cycleSingleLinkedList.c)
add_executable(cycleDoubleLinkedList linear/linkedlist/doublelinkedlist/cycleDoubleLinkedList.c)
add_executable(StaticLinkedList linear/linkedlist/static-linkedlist/StaticLinkedList.c)
add_executable(StaticLinkedList-guess linear/linkedlist/static-linkedlist/StaticLinkedList-guess.c)
add_executable(question13 linear/sequencetable/application-questions/question13.c)
add_executable(question2 linear/sequencetable/application-questions/question2-reverse.c)
add_executable(question1-DeleteMin linear/sequencetable/application-questions/question1-DeleteMin.c)
add_executable(question3-DeleteAllSame linear/sequencetable/application-questions/question3-DeleteAllSame.c)
add_executable(question4-DeleteBetween linear/sequencetable/application-questions/question4-OrderlyDeleteBetween.c)
add_executable(question5-DeleteBetween2 linear/sequencetable/application-questions/question5-DeleteBetween.c)
add_executable(question6-DuplicateRemoval linear/sequencetable/application-questions/question6-DuplicateRemoval.c)
add_executable(question7-Merge linear/sequencetable/application-questions/question7-Merge.c)
add_executable(question8-ReverseLinkedListInArray linear/sequencetable/application-questions/question8-ReverseLinkedListInArray.c)
add_executable(question9-SearchExchangeInsert linear/sequencetable/application-questions/question9-SearchExchangeInsert.c)
add_executable(question10-CircularLeftShift linear/sequencetable/application-questions/question10-CircularLeftShift.c)
add_executable(question11-median linear/sequencetable/application-questions/question11-median.c)
add_executable(SequenceStack-SqStack stack/sequence-stack/SequenceStack-SqStack.c)
add_executable(SharingStack stack/sequence-stack/SharingStack.c)
add_executable(LinkedStack stack/link-stack/LinkedStack.c)
add_executable(LinkedStack-head stack/link-stack/LinkedStack-head.c)
add_executable(SqQueue queue/sequence-queue/SqQueue.c)
add_executable(SqQueue-size queue/sequence-queue/SqQueue-size.c)
add_executable(SqQueue-tag queue/sequence-queue/SqQueue-tag.c)
add_executable(LinkedQueue queue/linked-queue/LinkedQueue.c)
add_executable(LinkedQueue-head queue/linked-queue/LinkedQueue-head.c)
add_executable(question12-Majority linear/sequencetable/application-questions/question12-Majority.c)
add_executable(parenthesis-matching stack/application/parenthesis-matching.c)
add_executable(parenthesis-matching2 stack/application/parenthesis-matching2.c)
add_executable(Factorial stack/recursion/Factorial.c)
add_executable(Fib stack/recursion/Fib.c)
add_executable(BinaryTree tree/binary-tree/BinaryTree.c)
add_executable(BinaryTree-find tree/binary-tree/BinaryTree-find.c)
add_executable(BinaryTree-middle-clue tree/binary-tree/BinaryTree-middle-clue.c)
add_executable(BinaryTree-middle-clue-recursion tree/binary-tree/BinaryTree-middle-clue-recursion.c)
add_executable(BinaryTree-Post-clue tree/binary-tree/BinaryTree-Post-clue.c)
add_executable(BinaryTree-Post-clue-recursion tree/binary-tree/BinaryTree-Post-clue-recursion.c)
add_executable(BinaryTree-Pre-clue-recursion tree/binary-tree/BinaryTree-Pre-clue-recursion.c)
add_executable(BinaryTree-Seq tree/binary-tree/BinaryTree-Seq.c)
add_executable(BinaryTree-Pre-clue tree/binary-tree/BinaryTree-Pre-clue.c)
add_executable(BinaryTree-levelOrder tree/binary-tree/BinaryTree-levelOrder.c)
add_executable(question4-delMin linear/linkedlist/applications/question4-delMin.c)
add_executable(question2-reverse linear/linkedlist/applications/question3-reverse.c)
add_executable(question1-delRecursion linear/linkedlist/applications/question1-delRecursion.c)
add_executable(question2-delSame linear/linkedlist/applications/question2-delSame.c)
add_executable(question5-Inverse linear/linkedlist/applications/question5-Inverse.c)
add_executable(LinkedTree tree/public-tree/linked-tree/LinkedTree.c)

add_executable(unionSet1 tree/union-set/unionSet1.c)
add_executable(unionSetOptimization tree/union-set/unionSetOptimization.c)
add_executable(unionSet-compressionPath tree/union-set/unionSet-compressionPath.c)
add_executable(tree tree/public-tree/seqTree/tree.c)
add_executable(application6-sort linear/linkedlist/applications/application6-sort.c)
add_executable(GraphAdjacent graph/GraphAdjacent.c)
add_executable(GraphAdjacent-Linked graph/GraphAdjacent-Linked.c)
add_executable(BST_Search search/binarysearch/BST_Search.c)
add_executable(asl search/binarysearch/avl.c)
add_executable(InsertSort sort/insert-sort/InsertSort.c)