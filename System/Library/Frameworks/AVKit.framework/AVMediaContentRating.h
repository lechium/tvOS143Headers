/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIImage;

@interface AVMediaContentRating : NSObject {

	id _restrictionSettingsChangeObserver;
	BOOL _restricted;
	NSString* _displayName;
	long long _rank;
	NSString* _countryCode;
	long long _domain;

}

@property (assign,setter=_setRestricted:,getter=isRestricted,nonatomic) BOOL restricted;              //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) long long rank;                                                        //@synthesize rank=_rank - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                                                //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) long long domain;                                                      //@synthesize domain=_domain - In the implementation block
+(id)maximumEffectiveTVShowRanking;
+(id)maximumEffectiveMovieRanking;
+(id)contentRestrictionsCountryCode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)domain;
-(NSString *)countryCode;
-(NSString *)displayName;
-(BOOL)isRestricted;
-(long long)rank;
-(UIImage *)image;
-(id)initWithRating:(id)arg1 rank:(long long)arg2 countryCode:(id)arg3 domain:(long long)arg4 ;
-(BOOL)isEqualToMediaContentRating:(id)arg1 ;
-(BOOL)isExplicitContentRestricted;
-(BOOL)_isCurrentlyRestricted;
-(void)_setRestricted:(BOOL)arg1 ;
@end
