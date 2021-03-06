//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CKKSSQLDatabaseObject : NSObject <NSCopying>
{
    NSDictionary *_originalSelfWhereClause;	// 8 = 0x8
}

+ (id)sqlColumns;	// IMP=0x000000010002e230
+ (id)sqlTable;	// IMP=0x000000010002e180
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x000000010002e0c4
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 orderBy:(id)arg3 error:(id *)arg4;	// IMP=0x000000010002df1c
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002df08
+ (id)fetch:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010002def0
+ (id)allWhere:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002dd6c
+ (id)all:(id *)arg1;	// IMP=0x000000010002dd58
+ (id)tryFromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002dbe8
+ (id)fromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002da80
+ (_Bool)deleteAll:(id *)arg1;	// IMP=0x000000010002da0c
+ (_Bool)performCKKSReadonlyTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000010002d8c4
+ (_Bool)performCKKSTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000010002d77c
+ (_Bool)queryMaxValueForField:(id)arg1 inTable:(id)arg2 where:(id)arg3 columns:(id)arg4 processRow:(CDUnknownBlockType)arg5;	// IMP=0x000000010002d5c4
+ (id)quotedString:(id)arg1;	// IMP=0x000000010002d52c
+ (_Bool)queryDatabaseTable:(id)arg1 where:(id)arg2 columns:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 processRow:(CDUnknownBlockType)arg7 error:(id *)arg8;	// IMP=0x000000010002d2f4
+ (_Bool)deleteFromTable:(id)arg1 where:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x000000010002d170
+ (void)bindWhereClause:(struct sqlite3_stmt *)arg1 whereDict:(id)arg2 cferror:(struct __CFError **)arg3;	// IMP=0x000000010002d064
+ (id)orderByClause:(id)arg1;	// IMP=0x000000010002cf64
+ (id)groupByClause:(id)arg1;	// IMP=0x000000010002ce78
+ (id)makeWhereClause:(id)arg1;	// IMP=0x000000010002cd8c
+ (_Bool)saveToDatabaseTable:(id)arg1 row:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x000000010002cc10
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000575b8
+ (id)all:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100057494
+ (id)allUUIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100057260
- (void).cxx_destruct;	// IMP=0x000000010002cc04
@property(copy) NSDictionary *originalSelfWhereClause; // @synthesize originalSelfWhereClause=_originalSelfWhereClause;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002cb9c
- (id)whereClauseToFindSelf;	// IMP=0x000000010002caec
- (id)sqlValues;	// IMP=0x000000010002ca3c
- (id)memoizeOriginalSelfWhereClause;	// IMP=0x000000010002c9f8
- (_Bool)deleteFromDatabase:(id *)arg1;	// IMP=0x000000010002c958
- (_Bool)saveToDatabaseWithConnection:(struct __OpaqueSecDbConnection *)arg1 error:(id *)arg2;	// IMP=0x000000010002c794
- (_Bool)saveToDatabase:(id *)arg1;	// IMP=0x000000010002c780

@end

