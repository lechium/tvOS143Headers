/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSURL, NSString;

@interface GKAuthenticateResponse : GKInternalRepresentation {

	BOOL _loginDisabled;
	BOOL _passwordChangeRequired;
	BOOL _shouldShowLinkAccountsUI;
	BOOL _useNewDashboardUI;
	BOOL _accessPointIsOnAutomatically;
	BOOL _accessPointShowHighlights;
	GKPlayerCredential* _credential;
	NSURL* _passwordChangeURL;
	NSString* _alertTitle;
	NSString* _alertMessage;
	NSString* _lastPersonalizationVersionDisplayed;
	unsigned long long _lastPrivacyNoticeVersionDisplayed;
	NSString* _lastProfilePrivacyVersionDisplayed;
	long long _accessPointLocation;

}

@property (nonatomic,retain) GKPlayerCredential * credential;                                   //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) BOOL loginDisabled;                                                //@synthesize loginDisabled=_loginDisabled - In the implementation block
@property (assign,nonatomic) BOOL passwordChangeRequired;                                       //@synthesize passwordChangeRequired=_passwordChangeRequired - In the implementation block
@property (nonatomic,retain) NSURL * passwordChangeURL;                                         //@synthesize passwordChangeURL=_passwordChangeURL - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkAccountsUI;                                     //@synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI - In the implementation block
@property (nonatomic,retain) NSString * alertTitle;                                             //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,retain) NSString * alertMessage;                                           //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,retain) NSString * lastPersonalizationVersionDisplayed;                    //@synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed - In the implementation block
@property (assign,nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;              //@synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed - In the implementation block
@property (nonatomic,retain) NSString * lastProfilePrivacyVersionDisplayed;                     //@synthesize lastProfilePrivacyVersionDisplayed=_lastProfilePrivacyVersionDisplayed - In the implementation block
@property (assign,nonatomic) BOOL useNewDashboardUI;                                            //@synthesize useNewDashboardUI=_useNewDashboardUI - In the implementation block
@property (assign,nonatomic) BOOL accessPointIsOnAutomatically;                                 //@synthesize accessPointIsOnAutomatically=_accessPointIsOnAutomatically - In the implementation block
@property (assign,nonatomic) BOOL accessPointShowHighlights;                                    //@synthesize accessPointShowHighlights=_accessPointShowHighlights - In the implementation block
@property (assign,nonatomic) long long accessPointLocation;                                     //@synthesize accessPointLocation=_accessPointLocation - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)init;
-(GKPlayerCredential *)credential;
-(void)setCredential:(GKPlayerCredential *)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
-(BOOL)loginDisabled;
-(BOOL)accessPointIsOnAutomatically;
-(void)setAccessPointIsOnAutomatically:(BOOL)arg1 ;
-(BOOL)accessPointShowHighlights;
-(void)setAccessPointShowHighlights:(BOOL)arg1 ;
-(long long)accessPointLocation;
-(void)setAccessPointLocation:(long long)arg1 ;
-(void)setUseNewDashboardUI:(BOOL)arg1 ;
-(void)setLoginDisabled:(BOOL)arg1 ;
-(BOOL)passwordChangeRequired;
-(void)setPasswordChangeRequired:(BOOL)arg1 ;
-(NSURL *)passwordChangeURL;
-(void)setPasswordChangeURL:(NSURL *)arg1 ;
-(BOOL)shouldShowLinkAccountsUI;
-(void)setShouldShowLinkAccountsUI:(BOOL)arg1 ;
-(NSString *)alertTitle;
-(void)setAlertTitle:(NSString *)arg1 ;
-(NSString *)lastPersonalizationVersionDisplayed;
-(void)setLastPersonalizationVersionDisplayed:(NSString *)arg1 ;
-(unsigned long long)lastPrivacyNoticeVersionDisplayed;
-(void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1 ;
-(NSString *)lastProfilePrivacyVersionDisplayed;
-(void)setLastProfilePrivacyVersionDisplayed:(NSString *)arg1 ;
-(BOOL)useNewDashboardUI;
@end

