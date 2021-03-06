/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolClientConnection.h>

@class NSMutableDictionary;

@interface MRIDSClientConnection : MRProtocolClientConnection {

	NSMutableDictionary* _discoveryModesForFeatures;

}
-(id)decryptData:(id)arg1 error:(id*)arg2 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3 ;
-(void)setDiscoveryMode:(unsigned)arg1 forFeature:(unsigned)arg2 ;
-(unsigned)discoveryModeForFeature:(unsigned)arg1 ;
-(void)clearDiscoveryModes;
-(id)encryptDataForMessage:(id)arg1 ;
@end

