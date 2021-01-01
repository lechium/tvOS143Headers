/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFiTunesObject.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDate, NSNumber, NSDictionary;

@interface WFiTunesStoreObject : WFiTunesObject <MTLJSONSerializing> {

	NSString* _artistID;
	NSString* _artistName;
	NSDate* _releaseDate;
	NSNumber* _price;
	NSString* _currencyCode;
	NSString* _descriptionText;

}

@property (nonatomic,readonly) NSString * artistID;                              //@synthesize artistID=_artistID - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                            //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                             //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSNumber * price;                                 //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) NSString * currencyCode;                          //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSString * formattedPrice; 
@property (nonatomic,readonly) NSString * descriptionText;                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)descriptionTextJSONTransformer;
-(NSString *)currencyCode;
-(NSNumber *)price;
-(NSString *)descriptionText;
-(NSString *)artistName;
-(NSDate *)releaseDate;
-(NSString *)formattedPrice;
-(NSString *)artistID;
@end

