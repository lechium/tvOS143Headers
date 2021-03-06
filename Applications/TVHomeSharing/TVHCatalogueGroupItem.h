//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHCatalogueItem-Protocol.h"

@class NSString, TVHCatalogueRelatedContent;

@interface TVHCatalogueGroupItem : NSObject <TVHCatalogueItem>
{
    NSString *_title;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    TVHCatalogueRelatedContent *_relatedContent;	// 24 = 0x18
}

+ (id)new;	// IMP=0x0000000100029428
- (void).cxx_destruct;	// IMP=0x00000001000297c4
@property(readonly, nonatomic) TVHCatalogueRelatedContent *relatedContent; // @synthesize relatedContent=_relatedContent;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_mediaEntitiesDataSource;	// IMP=0x0000000100029728
@property(readonly, nonatomic, getter=isRemoveable) _Bool removeable;
@property(readonly, nonatomic, getter=isHideable) _Bool hideable;
@property(readonly, nonatomic) _Bool shouldDisplay;
- (_Bool)updateWithMediaEntitiesDataSourceFetchResult:(id)arg1;	// IMP=0x0000000100029624
- (id)initWithTitle:(id)arg1;	// IMP=0x00000001000294ec
- (id)init;	// IMP=0x0000000100029464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

