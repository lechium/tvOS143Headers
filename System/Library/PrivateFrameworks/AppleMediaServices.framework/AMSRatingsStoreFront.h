/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface AMSRatingsStoreFront : NSObject {

	NSString* _defaultLanguage;
	unsigned long long _mediaType;
	NSString* _name;
	NSArray* _ratingSystems;
	NSString* _storeFront;
	NSString* _storeFrontID;
	NSArray* _supportedLanguages;

}

@property (nonatomic,readonly) NSString * defaultLanguage;                //@synthesize defaultLanguage=_defaultLanguage - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType;              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * ratingSystems;                   //@synthesize ratingSystems=_ratingSystems - In the implementation block
@property (nonatomic,readonly) NSString * storeFront;                     //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,readonly) NSString * storeFrontID;                   //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,readonly) NSArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
+(id)storeFrontWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 ;
+(id)storeFrontWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(NSString *)name;
-(id)description;
-(NSArray *)supportedLanguages;
-(unsigned long long)mediaType;
-(NSString *)defaultLanguage;
-(NSString *)storeFrontID;
-(NSString *)storeFront;
-(NSArray *)ratingSystems;
-(id)initWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 ;
@end

