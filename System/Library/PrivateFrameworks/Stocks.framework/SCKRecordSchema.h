/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface SCKRecordSchema : NSObject {

	NSString* _recordType;
	NSArray* _fieldSchemas;

}

@property (nonatomic,copy,readonly) NSString * recordType;               //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fieldNames; 
@property (nonatomic,copy,readonly) NSArray * fieldSchemas;              //@synthesize fieldSchemas=_fieldSchemas - In the implementation block
-(NSString *)recordType;
-(BOOL)isValidRecord:(id)arg1 ;
-(NSArray *)fieldNames;
-(id)initWithRecordType:(id)arg1 fieldSchemas:(id)arg2 ;
-(NSArray *)fieldSchemas;
-(id)schemaForFieldName:(id)arg1 ;
@end

