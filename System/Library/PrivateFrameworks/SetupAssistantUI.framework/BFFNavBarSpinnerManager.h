/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface BFFNavBarSpinnerManager : NSObject {

	NSMutableDictionary* _savedRightItems;
	NSMutableDictionary* _savedLeftItems;
	NSMutableDictionary* _navigationItems;

}
+(id)sharedSpinnerManager;
-(id)init;
-(void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 ;
-(void)stopAnimatingForIdentifier:(id)arg1 ;
@end

