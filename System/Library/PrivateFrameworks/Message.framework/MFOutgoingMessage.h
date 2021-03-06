/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/MFMailMessage.h>

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {

	MFMessageBody* _messageBody;
	MFMutableMessageHeaders* _messageHeaders;

}
-(void)dealloc;
-(unsigned long long)messageSize;
-(id)headers;
-(id)messageData;
-(id)messageBody;
-(id)messageStore;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)headersIfAvailable;
-(id)messageBodyIfAvailable;
-(id)messageDataHolder;
-(id)mutableHeaders;
-(void)setMessageBody:(id)arg1 ;
-(void)setMutableHeaders:(id)arg1 ;
@end

