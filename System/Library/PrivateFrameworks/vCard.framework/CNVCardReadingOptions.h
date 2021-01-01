/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface CNVCardReadingOptions : NSObject {

	BOOL _useConcurrentParsing;
	unsigned long long _contactLimit;
	NSArray* _propertiesToFetch;
	unsigned long long _maximumValueLength;

}

@property (assign,nonatomic) unsigned long long contactLimit;                    //@synthesize contactLimit=_contactLimit - In the implementation block
@property (nonatomic,copy) NSArray * propertiesToFetch;                          //@synthesize propertiesToFetch=_propertiesToFetch - In the implementation block
@property (assign,nonatomic) unsigned long long maximumValueLength;              //@synthesize maximumValueLength=_maximumValueLength - In the implementation block
@property (assign,nonatomic) BOOL useConcurrentParsing;                          //@synthesize useConcurrentParsing=_useConcurrentParsing - In the implementation block
-(id)description;
-(id)init;
-(void)setPropertiesToFetch:(NSArray *)arg1 ;
-(NSArray *)propertiesToFetch;
-(unsigned long long)contactLimit;
-(unsigned long long)maximumValueLength;
-(BOOL)useConcurrentParsing;
-(void)setContactLimit:(unsigned long long)arg1 ;
-(void)setMaximumValueLength:(unsigned long long)arg1 ;
-(void)setUseConcurrentParsing:(BOOL)arg1 ;
@end
