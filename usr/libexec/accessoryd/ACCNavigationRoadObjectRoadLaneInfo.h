//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ACCNavigationRoadObjectRoadLaneInfo : NSObject
{
    NSMutableDictionary *_infoDict;	// 8 = 0x8
}

+ (id)keyForType:(unsigned short)arg1;	// IMP=0x00000001000396c0
- (void).cxx_destruct;	// IMP=0x0000000100039864
@property(retain) NSMutableDictionary *infoDict; // @synthesize infoDict=_infoDict;
- (id)copyDictionary;	// IMP=0x0000000100039690
- (void)setInfoFromDictionary:(id)arg1;	// IMP=0x0000000100039554
- (_Bool)setInfo:(unsigned short)arg1 data:(id)arg2;	// IMP=0x00000001000394a4
- (id)copyInfo:(unsigned short)arg1;	// IMP=0x0000000100039410
- (_Bool)_checkDataClassForType:(unsigned short)arg1 data:(id)arg2;	// IMP=0x00000001000392cc
- (id)description;	// IMP=0x000000010003911c
- (id)init;	// IMP=0x00000001000390b8

@end

