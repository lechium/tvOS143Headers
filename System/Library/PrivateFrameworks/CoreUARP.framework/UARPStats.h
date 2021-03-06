/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreUARP/CoreUARP-Structs.h>
@interface UARPStats : NSObject {

	unsigned _packetsNoVersionAgreement;
	unsigned _packetsMissed;
	unsigned _packetsDuplicate;
	unsigned _packetsOutOfOrder;

}

@property (readonly) unsigned packetsNoVersionAgreement;              //@synthesize packetsNoVersionAgreement=_packetsNoVersionAgreement - In the implementation block
@property (readonly) unsigned packetsMissed;                          //@synthesize packetsMissed=_packetsMissed - In the implementation block
@property (readonly) unsigned packetsDuplicate;                       //@synthesize packetsDuplicate=_packetsDuplicate - In the implementation block
@property (readonly) unsigned packetsOutOfOrder;                      //@synthesize packetsOutOfOrder=_packetsOutOfOrder - In the implementation block
-(unsigned)packetsDuplicate;
-(unsigned)packetsOutOfOrder;
-(id)initWithStatistics:(UARPStatistics*)arg1 ;
-(unsigned)packetsNoVersionAgreement;
-(unsigned)packetsMissed;
@end

