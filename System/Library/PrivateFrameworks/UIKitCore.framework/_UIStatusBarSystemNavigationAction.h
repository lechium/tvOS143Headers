/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarAction.h>

@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction {

	unsigned long long _destination;

}

@property (assign,nonatomic) unsigned long long destination;              //@synthesize destination=_destination - In the implementation block
+(id)backNavigationAction;
+(id)_navigationActionForDestination:(unsigned long long)arg1 ;
+(id)forwardNavigationAction;
-(void)setDestination:(unsigned long long)arg1 ;
-(unsigned long long)destination;
@end

