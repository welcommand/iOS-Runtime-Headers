/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList <TSUCustomFormatList> {
    NSMutableDictionary *mNamesList;
    NSMutableDictionary *mStemMatchCustomFormats;
}

- (unsigned int)addCustomFormat:(struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; } x1; id x2; int x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; double x_4_1_5; unsigned int x_4_1_6 : 8; unsigned char x_4_1_7; unsigned char x_4_1_8; unsigned char x_4_1_9; unsigned char x_4_1_10; unsigned char x_4_1_11; unsigned char x_4_1_12; unsigned char x_4_1_13; unsigned short x_4_1_14; unsigned int x_4_1_15 : 1; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; } x4; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_5_1_1; struct { /* ? */ } *x_5_1_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_2_1; } x_5_1_3; } x5; }*)arg1 allowNameOverwrite:(bool)arg2;
- (unsigned int)addPastedCustomFormat:(struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; } x1; id x2; int x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; double x_4_1_5; unsigned int x_4_1_6 : 8; unsigned char x_4_1_7; unsigned char x_4_1_8; unsigned char x_4_1_9; unsigned char x_4_1_10; unsigned char x_4_1_11; unsigned char x_4_1_12; unsigned char x_4_1_13; unsigned short x_4_1_14; unsigned int x_4_1_15 : 1; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; } x4; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_5_1_1; struct { /* ? */ } *x_5_1_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_2_1; } x_5_1_3; } x5; }*)arg1 withOldKey:(unsigned int)arg2;
- (id)allNumberKeys;
- (long long)count;
- (struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; } x1; id x2; int x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; double x_4_1_5; unsigned int x_4_1_6 : 8; unsigned char x_4_1_7; unsigned char x_4_1_8; unsigned char x_4_1_9; unsigned char x_4_1_10; unsigned char x_4_1_11; unsigned char x_4_1_12; unsigned char x_4_1_13; unsigned short x_4_1_14; unsigned int x_4_1_15 : 1; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; } x4; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_5_1_1; struct { /* ? */ } *x_5_1_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_2_1; } x_5_1_3; } x5; }*)customFormatForKey:(unsigned int)arg1;
- (id)customFormatWrapperForKey:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)importCustomFormat:(struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; } x1; id x2; int x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; double x_4_1_5; unsigned int x_4_1_6 : 8; unsigned char x_4_1_7; unsigned char x_4_1_8; unsigned char x_4_1_9; unsigned char x_4_1_10; unsigned char x_4_1_11; unsigned char x_4_1_12; unsigned char x_4_1_13; unsigned short x_4_1_14; unsigned int x_4_1_15 : 1; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; } x4; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_5_1_1; struct { /* ? */ } *x_5_1_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_2_1; } x_5_1_3; } x5; }*)arg1;
- (id)init;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithType:(int)arg1 context:(id)arg2;
- (unsigned int)maxKey;
- (id)newUniqueNameFromName:(id)arg1 preserveSeed:(bool)arg2;
- (id)newUniqueNameFromName:(id)arg1;
- (unsigned int)p_addCustomFormat:(struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; } x1; id x2; int x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; double x_4_1_5; unsigned int x_4_1_6 : 8; unsigned char x_4_1_7; unsigned char x_4_1_8; unsigned char x_4_1_9; unsigned char x_4_1_10; unsigned char x_4_1_11; unsigned char x_4_1_12; unsigned char x_4_1_13; unsigned short x_4_1_14; unsigned int x_4_1_15 : 1; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; } x4; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_5_1_1; struct { /* ? */ } *x_5_1_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_2_1; } x_5_1_3; } x5; }*)arg1 withMode:(int)arg2 lookupUsingNameStem:(bool)arg3;
- (void)p_removeCustomFormatForKey:(unsigned int)arg1;
- (void)p_setupNamesList;
- (void)removeCustomFormatForKey:(unsigned int)arg1;
- (void)restoreCustomFormat:(struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; } x1; id x2; int x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; double x_4_1_5; unsigned int x_4_1_6 : 8; unsigned char x_4_1_7; unsigned char x_4_1_8; unsigned char x_4_1_9; unsigned char x_4_1_10; unsigned char x_4_1_11; unsigned char x_4_1_12; unsigned char x_4_1_13; unsigned short x_4_1_14; unsigned int x_4_1_15 : 1; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; } x4; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_5_1_1; struct { /* ? */ } *x_5_1_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_2_1; } x_5_1_3; } x5; }*)arg1 withOldKey:(unsigned int)arg2;
- (bool)rollbackLastCustomFormat:(struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; } x1; id x2; int x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; double x_4_1_5; unsigned int x_4_1_6 : 8; unsigned char x_4_1_7; unsigned char x_4_1_8; unsigned char x_4_1_9; unsigned char x_4_1_10; unsigned char x_4_1_11; unsigned char x_4_1_12; unsigned char x_4_1_13; unsigned short x_4_1_14; unsigned int x_4_1_15 : 1; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; } x4; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_5_1_1; struct { /* ? */ } *x_5_1_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_2_1; } x_5_1_3; } x5; }*)arg1;
- (void)saveToArchiver:(id)arg1;
- (bool)supportsIDMapForType:(int)arg1;
- (void)updateCustomFormat:(struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x_1_1_1; } x1; id x2; int x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; double x_4_1_5; unsigned int x_4_1_6 : 8; unsigned char x_4_1_7; unsigned char x_4_1_8; unsigned char x_4_1_9; unsigned char x_4_1_10; unsigned char x_4_1_11; unsigned char x_4_1_12; unsigned char x_4_1_13; unsigned short x_4_1_14; unsigned int x_4_1_15 : 1; unsigned int x_4_1_16 : 1; unsigned int x_4_1_17 : 1; unsigned int x_4_1_18 : 1; unsigned int x_4_1_19 : 1; unsigned int x_4_1_20 : 1; } x4; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_5_1_1; struct { /* ? */ } *x_5_1_2; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct { /* ? */ } *x_3_2_1; } x_5_1_3; } x5; }*)arg1 withOldKey:(unsigned int)arg2;

@end