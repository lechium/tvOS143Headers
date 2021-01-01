/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRTextEditingAttributes, NSData;

@interface MRKeyboardMessage : MRProtocolMessage {

	MRTextEditingAttributes* _attributes;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) NSData * encryptedTextCyphertext; 
@property (nonatomic,readonly) MRTextEditingAttributes * attributes; 
+(id)encryptedMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3 usingCryptoSession:(id)arg4 ;
-(unsigned long long)type;
-(unsigned long long)state;
-(MRTextEditingAttributes *)attributes;
-(id)decryptedTextUsingCryptoSession:(id)arg1 ;
-(id)initWithState:(unsigned long long)arg1 encryptedTextCyphertext:(id)arg2 attributes:(id)arg3 ;
-(NSData *)encryptedTextCyphertext;
@end

