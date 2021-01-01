/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject {

	NSMapTable* _redirectHandlerMap;

}

@property (nonatomic,retain) NSMapTable * redirectHandlerMap;              //@synthesize redirectHandlerMap=_redirectHandlerMap - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setRedirectHandlerMap:(NSMapTable *)arg1 ;
-(NSMapTable *)redirectHandlerMap;
-(id)_redirectURLFromURL:(id)arg1 ;
-(void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(/*^block*/id)arg2 ;
-(void)unRegisterOAuthClientForRedirectURL:(id)arg1 ;
-(BOOL)handleOAuthRedirectURL:(id)arg1 ;
@end
