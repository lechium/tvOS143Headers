/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRCryptoPairingMessage : MRProtocolMessage

@property (nonatomic,readonly) NSData * pairingData; 
@property (nonatomic,readonly) int status; 
@property (getter=isRetrying,nonatomic,readonly) BOOL retrying; 
@property (getter=isUsingSystemPairing,nonatomic,readonly) BOOL usingSystemPairing; 
@property (nonatomic,readonly) unsigned long long state; 
-(unsigned long long)type;
-(unsigned long long)state;
-(int)status;
-(unsigned long long)encryptionType;
-(BOOL)isUsingSystemPairing;
-(id)initWithPairingData:(id)arg1 status:(int)arg2 isRetrying:(BOOL)arg3 isUsingSystemPairing:(BOOL)arg4 state:(unsigned long long)arg5 ;
-(NSData *)pairingData;
-(id)initWithPairingData:(id)arg1 status:(int)arg2 ;
-(BOOL)isRetrying;
@end

