//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFLinkedListItem, NSMutableDictionary;

@interface ADNotificationOrderedDictionary : NSObject
{
    NSMutableDictionary *_allBulletins;	// 8 = 0x8
    AFLinkedListItem *_orderedBulletinsHead;	// 16 = 0x10
    AFLinkedListItem *_orderedBulletinsTail;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001002adef4
- (void)removeBulletinItem:(id)arg1;	// IMP=0x00000001002ade50
- (id)appendItemWithBulletin:(id)arg1;	// IMP=0x00000001002addb0
- (void)enumerateBulletinsAfterBulletinWithNotificationID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001002adc80
- (void)removeBulletinWithInternalID:(id)arg1;	// IMP=0x00000001002adbf8
- (void)setBulletin:(id)arg1 forInternalID:(id)arg2;	// IMP=0x00000001002adb30
- (id)allBulletins;	// IMP=0x00000001002ad99c
- (id)bulletinForInternalID:(id)arg1;	// IMP=0x00000001002ad944
- (id)init;	// IMP=0x00000001002ad8e0

@end

