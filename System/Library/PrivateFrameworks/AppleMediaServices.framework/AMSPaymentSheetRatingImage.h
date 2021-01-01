/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AMSPaymentSheetRatingImage : NSObject {

	long long _ratingType;
	NSString* _URLString;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * localAssetName; 
@property (nonatomic,readonly) long long ratingType;                                     //@synthesize ratingType=_ratingType - In the implementation block
@property (getter=isServerSupplied,nonatomic,readonly) BOOL serverSupplied; 
@property (nonatomic,readonly) BOOL tint; 
@property (nonatomic,copy,readonly) NSString * URLString;                                //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                                    //@synthesize value=_value - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)value;
-(NSString *)URLString;
-(BOOL)tint;
-(long long)ratingType;
-(id)initWithURLString:(id)arg1 ;
-(long long)_ratingTypeForType:(id)arg1 ;
-(BOOL)isServerSupplied;
-(NSString *)localAssetName;
@end

