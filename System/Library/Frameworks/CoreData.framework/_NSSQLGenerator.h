/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSQLiteStatement, NSSQLiteAdapter, NSMutableString;

@interface _NSSQLGenerator : NSObject {

	NSSQLiteStatement* _statement;
	NSSQLiteAdapter* _adapter;
	NSMutableString* _sqlString;
	NSMutableString* _whereClause;
	NSMutableString* _selectList;

}
+(void)initialize;
-(void)dealloc;
@end
