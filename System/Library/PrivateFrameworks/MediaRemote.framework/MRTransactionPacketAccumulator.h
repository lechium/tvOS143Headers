/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableOrderedSet;

@interface MRTransactionPacketAccumulator : NSObject {

	NSMutableOrderedSet* _packets;
	unsigned long long _currentLength;

}
-(id)init;
-(id)mergePacket:(id)arg1 ;
@end
