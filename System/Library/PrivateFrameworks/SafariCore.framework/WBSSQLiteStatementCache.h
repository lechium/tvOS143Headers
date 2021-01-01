/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {

	WBSSQLiteDatabase* _database;
	NSMutableDictionary* _statements;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)initWithDatabase:(id)arg1 ;
-(id)cachedStatementForQuery:(id)arg1 ;
-(id)_createStatementForQuery:(id)arg1 error:(id*)arg2 ;
-(void)setCachedStatement:(id)arg1 forQuery:(id)arg2 ;
-(id)statementForQuery:(id)arg1 error:(id*)arg2 ;
@end
