/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/ML3DatabaseResult.h>

@class NSArray, NSDictionary, ML3DatabaseDistantConnection, NSString;

@interface ML3DatabaseDistantResult : ML3DatabaseResult {

	NSArray* _cachedRows;
	NSDictionary* _cachedColumnNameIndexMap;
	ML3DatabaseDistantConnection* _distantConnection;
	NSString* _sql;
	NSArray* _parameters;

}

@property (nonatomic,readonly) ML3DatabaseDistantConnection * distantConnection;              //@synthesize distantConnection=_distantConnection - In the implementation block
@property (nonatomic,readonly) NSString * sql;                                                //@synthesize sql=_sql - In the implementation block
@property (nonatomic,readonly) NSArray * parameters;                                          //@synthesize parameters=_parameters - In the implementation block
-(id)description;
-(id)init;
-(NSArray *)parameters;
-(id)initWithStatement:(id)arg1 ;
-(void)enumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)sql;
-(unsigned long long)indexForColumnName:(id)arg1 ;
-(id)columnNameIndexMap;
-(id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3 ;
-(void)_localEnumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(void)_remoteEnumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_fetchRowsIfEmpty;
-(ML3DatabaseDistantConnection *)distantConnection;
@end
