/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeSharing/HSRequest.h>

@interface HSPlaybackControlRequest : HSRequest {

	unsigned _interfaceID;
	long long _controlCommand;

}

@property (nonatomic,readonly) long long controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (nonatomic,readonly) unsigned interfaceID;                  //@synthesize interfaceID=_interfaceID - In the implementation block
-(unsigned)interfaceID;
-(id)initWithInterfaceID:(unsigned)arg1 controlCommand:(long long)arg2 ;
-(long long)controlCommand;
@end

