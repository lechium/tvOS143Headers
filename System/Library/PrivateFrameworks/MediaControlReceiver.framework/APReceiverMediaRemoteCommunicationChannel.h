/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControlReceiver.framework/MediaControlReceiver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class APReceiverMediaRemoteCommunicationChannelInternal, NSString;

@interface APReceiverMediaRemoteCommunicationChannel : NSObject {

	APReceiverMediaRemoteCommunicationChannelInternal* _commChannel;

}

@property (nonatomic,readonly) NSString * uuid; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectID;
-(NSString *)uuid;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

