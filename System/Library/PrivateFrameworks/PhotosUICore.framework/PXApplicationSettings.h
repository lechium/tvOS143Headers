/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@class NSString;

@interface PXApplicationSettings : PXSettings {

	BOOL _wantsPseudostringsWithSpecialCharacters;
	double _defaultNavigationTimeoutDuration;
	NSString* _stringWithSpecialCharacters;

}

@property (assign,nonatomic) double defaultNavigationTimeoutDuration;                   //@synthesize defaultNavigationTimeoutDuration=_defaultNavigationTimeoutDuration - In the implementation block
@property (assign,nonatomic) BOOL wantsPseudostringsWithSpecialCharacters;              //@synthesize wantsPseudostringsWithSpecialCharacters=_wantsPseudostringsWithSpecialCharacters - In the implementation block
@property (nonatomic,copy) NSString * stringWithSpecialCharacters;                      //@synthesize stringWithSpecialCharacters=_stringWithSpecialCharacters - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(double)defaultNavigationTimeoutDuration;
-(void)setDefaultNavigationTimeoutDuration:(double)arg1 ;
-(BOOL)wantsPseudostringsWithSpecialCharacters;
-(void)setWantsPseudostringsWithSpecialCharacters:(BOOL)arg1 ;
-(NSString *)stringWithSpecialCharacters;
-(void)setStringWithSpecialCharacters:(NSString *)arg1 ;
@end

