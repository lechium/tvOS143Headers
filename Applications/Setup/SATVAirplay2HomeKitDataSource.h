//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVAirplay2DataSource-Protocol.h"
#import "SATVAirplay2DataSourceUpdating-Protocol.h"

@class NSArray, NSHashTable, NSString;
@protocol SATVAirplay2DataSourceObject;

@interface SATVAirplay2HomeKitDataSource : NSObject <SATVAirplay2DataSource, SATVAirplay2DataSourceUpdating>
{
    _Bool _ready;	// 8 = 0x8
    NSArray *_homes;	// 16 = 0x10
    id <SATVAirplay2DataSourceObject> _preferredHome;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
}

+ (id)_errorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x00000001000218d4
+ (void)_moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000215f0
+ (void)_moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100021278
+ (_Bool)isHomeKitAvailable;	// IMP=0x000000010001f2dc
- (void).cxx_destruct;	// IMP=0x0000000100021a38
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(copy, nonatomic) id <SATVAirplay2DataSourceObject> preferredHome; // @synthesize preferredHome=_preferredHome;
@property(copy, nonatomic) NSArray *homes; // @synthesize homes=_homes;
- (void)_updateReadyStateAndNotify:(_Bool)arg1;	// IMP=0x0000000100021020
- (void)_notifyDataSourceDidUpdate;	// IMP=0x0000000100020f70
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020e08
- (void)_resetCachedState;	// IMP=0x0000000100020dcc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100020bd0
@property(readonly, copy) NSString *description;
- (void)updateLocalAccessoryAudioDestinationWithHomeTheaterSpeaker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000206d4
- (void)moveOrAddLocalAccessoryToRoomNamed:(id)arg1 inHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000201ec
@property(readonly, nonatomic) _Bool isUpdatingAvailable;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100020164
- (void)addObserver:(id)arg1;	// IMP=0x00000001000200f8
- (id)homeTheaterSpeakersInRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010001f918
- (id)roomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010001f76c
- (id)roomsForHome:(id)arg1;	// IMP=0x000000010001f5f8
- (void)dealloc;	// IMP=0x000000010001f200
- (id)init;	// IMP=0x000000010001f12c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

