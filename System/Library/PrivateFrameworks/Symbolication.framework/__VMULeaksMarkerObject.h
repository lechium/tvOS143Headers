/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Symbolication/Symbolication-Structs.h>
@interface __VMULeaksMarkerObject : NSObject {

	SCD_Struct_VM11* _region;
	unsigned _entryIndex;

}

@property (assign,nonatomic) SCD_Struct_VM11* region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned entryIndex;                  //@synthesize entryIndex=_entryIndex - In the implementation block
-(void)dealloc;
-(SCD_Struct_VM11*)region;
-(void)setRegion:(SCD_Struct_VM11*)arg1 ;
-(unsigned)entryIndex;
-(void)setEntryIndex:(unsigned)arg1 ;
@end

