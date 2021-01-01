/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SBSInCallPresentationConfiguration : NSObject <NSSecureCoding> {

	BOOL _userInitiated;
	double _preferredBannerHeight;
	long long _preferredPresentationMode;
	NSString* _sceneBundleIdentifier;

}

@property (assign,nonatomic) double preferredBannerHeight;                           //@synthesize preferredBannerHeight=_preferredBannerHeight - In the implementation block
@property (assign,nonatomic) long long preferredPresentationMode;                    //@synthesize preferredPresentationMode=_preferredPresentationMode - In the implementation block
@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneBundleIdentifier;                //@synthesize sceneBundleIdentifier=_sceneBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isUserInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(id)initWithSceneBundleIdentifier:(id)arg1 ;
-(double)preferredBannerHeight;
-(void)setPreferredBannerHeight:(double)arg1 ;
-(long long)preferredPresentationMode;
-(void)setPreferredPresentationMode:(long long)arg1 ;
-(NSString *)sceneBundleIdentifier;
@end

