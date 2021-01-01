/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSArray;

@interface AMSMarketingItem : NSObject {

	NSDictionary* _rawValues;

}

@property (nonatomic,readonly) NSDictionary * artworkDictionary; 
@property (nonatomic,readonly) NSString * badge; 
@property (nonatomic,readonly) NSString * campaignID; 
@property (nonatomic,readonly) NSString * itemID; 
@property (nonatomic,readonly) NSArray * itemActions; 
@property (nonatomic,copy,readonly) NSDictionary * rawValues;                 //@synthesize rawValues=_rawValues - In the implementation block
@property (nonatomic,readonly) NSArray * relatedContent; 
@property (nonatomic,readonly) NSString * serviceType; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * templateID; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSArray * videos; 
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)serviceType;
-(id)endDate;
-(NSString *)title;
-(NSString *)itemID;
-(NSString *)subtitle;
-(NSString *)URLString;
-(NSString *)badge;
-(NSDictionary *)artworkDictionary;
-(NSArray *)videos;
-(NSArray *)relatedContent;
-(NSDictionary *)rawValues;
-(id)video;
-(NSString *)campaignID;
-(NSArray *)itemActions;
-(NSString *)templateID;
-(id)abSettings;
-(id)renderingAttributes;
-(id)tagline;
@end
