/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVOutputDeviceCommunicationChannelImpl;
@interface AVOutputDeviceCommunicationChannel : NSObject {

	id<AVOutputDeviceCommunicationChannelImpl> _impl;

}
-(void)dealloc;
-(void)close;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputDeviceCommunicationChannelImpl:(id)arg1 ;
@end

