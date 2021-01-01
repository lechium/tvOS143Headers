/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PSYSyncSessionObserverInterface.h>

@protocol PSYSyncSessionObserverInterface;
@class NSString;

@interface PSYSyncSessionObserverExportedObject : NSObject <PSYSyncSessionObserverInterface> {

	id<PSYSyncSessionObserverInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYSyncSessionObserverInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PSYSyncSessionObserverInterface>)delegate;
-(void)setDelegate:(id<PSYSyncSessionObserverInterface>)arg1 ;
-(oneway void)invalidateSyncSession:(id)arg1 ;
-(oneway void)updateSyncSession:(id)arg1 ;
-(oneway void)syncSessionWillStart:(id)arg1 ;
@end

