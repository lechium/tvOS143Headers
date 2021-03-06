//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, TVHKMediaLibrary;

@interface TVHMoviesInfoCenter : NSObject
{
    TVHKMediaLibrary *_mediaLibrary;	// 8 = 0x8
    NSArray *_movies;	// 16 = 0x10
    NSDictionary *_moviesByContributorTitle;	// 24 = 0x18
    NSDictionary *_movieByIdentifier;	// 32 = 0x20
    NSDictionary *_moviesByGenreTitle;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
}

+ (id)new;	// IMP=0x000000010002a9c4
- (void).cxx_destruct;	// IMP=0x000000010002af88
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSDictionary *moviesByGenreTitle; // @synthesize moviesByGenreTitle=_moviesByGenreTitle;
@property(copy, nonatomic) NSDictionary *movieByIdentifier; // @synthesize movieByIdentifier=_movieByIdentifier;
@property(copy, nonatomic) NSDictionary *moviesByContributorTitle; // @synthesize moviesByContributorTitle=_moviesByContributorTitle;
@property(copy, nonatomic) NSArray *movies; // @synthesize movies=_movies;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)updateWithFetchResponse:(id)arg1;	// IMP=0x000000010002ac44
- (void)removeObserver:(id)arg1;	// IMP=0x000000010002abd8
- (void)addObserver:(id)arg1;	// IMP=0x000000010002ab6c
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000010002aa88
- (id)init;	// IMP=0x000000010002aa00

@end

