/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TVRCMROriginDelegate;
@interface _TVRCMROriginWrapper : NSObject {

	void* _origin;
	BOOL _isObserving;
	id<_TVRCMROriginDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCMROriginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<_TVRCMROriginDelegate>)delegate;
-(void)setDelegate:(id<_TVRCMROriginDelegate>)arg1 ;
-(id)initWithOrigin:(void*)arg1 ;
-(void)sendCommand:(unsigned)arg1 options:(id)arg2 ;
-(void)endObservingUpdates;
-(void)startObservingUpdates;
-(BOOL)isEqualToOriginRef:(void*)arg1 ;
-(void)getPickedRouteHasVolumeControl:(/*^block*/id)arg1 ;
-(void)_supportedCommandsChanged:(id)arg1 ;
-(void)getSupportedCommands:(/*^block*/id)arg1 ;
-(void)_fetchAndReportSupportedCommands;
@end

