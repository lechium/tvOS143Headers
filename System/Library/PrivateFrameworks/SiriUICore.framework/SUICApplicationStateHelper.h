/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol OS_dispatch_queue;
@class BKSApplicationStateMonitor, NSMutableDictionary, NSObject, NSString;

@interface SUICApplicationStateHelper : NSObject <FBSDisplayLayoutObserver> {

	BKSApplicationStateMonitor* _appStateMonitor;
	NSMutableDictionary* _foregroundAppInfos;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(id)_foregroundAppInfosFor:(long long)arg1 ;
-(void)_updateForAppInfoDictionaries:(id)arg1 displayType:(id)arg2 ;
-(void)_appInfoDictionariesForDisplayLayout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)foregroundAppInfos;
-(id)foregroundAppInfosForCarPlay;
-(void)_updateForAppInfoDictionaries:(id)arg1 ;
@end

