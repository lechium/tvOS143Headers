/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAP/MFIMAPMessage.h>

@class NSData, MFMessageHeaders;

@interface MFIMAPMessageWithCache : MFIMAPMessage {

	NSData* _messageData;
	MFMessageHeaders* _headers;

}
-(void)dealloc;
-(id)headers;
-(void)setHeaders:(id)arg1 ;
-(id)messageData;
-(id)headerData;
-(BOOL)isMessageContentsLocallyAvailable;
-(id)headersIfAvailable;
-(void)setMessageData:(id)arg1 isPartial:(BOOL)arg2 ;
@end
