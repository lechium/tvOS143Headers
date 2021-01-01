/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionRequest, NSError, MRPlayerPath;

@interface MRPlaybackSessionMigrateEndMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlaybackSessionRequest * request; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(unsigned long long)type;
-(NSError *)error;
-(MRPlaybackSessionRequest *)request;
-(MRPlayerPath *)playerPath;
-(id)initWithRequest:(id)arg1 error:(id)arg2 playerPath:(id)arg3 ;
@end
