/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/NWConnection.h>

@interface NWDatagramConnection : NWConnection
+(id)connectionWithConnectedSocket:(int)arg1 ;
-(BOOL)readDatagramsWithMinimumCount:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)writeDatagrams:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

