/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IMDSqlQuery : NSObject {

	NSString* _tableName;
	NSString* _columns;
	NSString* _where;
	long long _limit;

}

@property (nonatomic,copy,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy) NSString * columns;                         //@synthesize columns=_columns - In the implementation block
@property (assign,nonatomic) long long limit;                          //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy) NSString * where;                           //@synthesize where=_where - In the implementation block
+(id)databaseQuery:(id)arg1 ;
-(void)dealloc;
-(NSString *)tableName;
-(NSString *)columns;
-(void)setColumns:(NSString *)arg1 ;
-(void)setLimit:(long long)arg1 ;
-(long long)limit;
-(id)initWithTableName:(id)arg1 ;
-(id)createQueryString;
-(NSString *)where;
-(void)setWhere:(NSString *)arg1 ;
@end

