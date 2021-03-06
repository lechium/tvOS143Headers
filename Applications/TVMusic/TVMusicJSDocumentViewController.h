//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVAppDocumentRequestController.h>

#import "IKServiceRequestDelegate-Protocol.h"

@class MPModelGenericObject, MPSectionedCollection, NSDictionary, NSMutableArray, NSString;

@interface TVMusicJSDocumentViewController : _TVAppDocumentRequestController <IKServiceRequestDelegate>
{
    _Bool _visibleOnScreen;	// 8 = 0x8
    _Bool _shouldUpdateOnViewDidAppear;	// 9 = 0x9
    _Bool _updatePending;	// 10 = 0xa
    NSDictionary *_contextDictionary;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSMutableArray *_updateRequests;	// 32 = 0x20
    MPSectionedCollection *_itemObjects;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010006b3b8
@property(retain, nonatomic) MPSectionedCollection *itemObjects; // @synthesize itemObjects=_itemObjects;
@property(retain, nonatomic) NSMutableArray *updateRequests; // @synthesize updateRequests=_updateRequests;
@property(nonatomic) _Bool updatePending; // @synthesize updatePending=_updatePending;
@property(nonatomic) _Bool shouldUpdateOnViewDidAppear; // @synthesize shouldUpdateOnViewDidAppear=_shouldUpdateOnViewDidAppear;
@property(nonatomic) _Bool visibleOnScreen; // @synthesize visibleOnScreen=_visibleOnScreen;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;
- (void)_modelResponseDidInvalidate:(id)arg1;	// IMP=0x000000010006b15c
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;	// IMP=0x000000010006b06c
- (void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3;	// IMP=0x000000010006ad4c
- (void)updateServiceRequest:(id)arg1 documentDidChange:(id)arg2;	// IMP=0x000000010006acec
- (void)_performRequestForItemDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006aaa8
- (void)_updateDocument;	// IMP=0x000000010006a840
- (void)removeViewController;	// IMP=0x000000010006a614
@property(readonly, nonatomic) MPModelGenericObject *representedObject;
- (void)updateWithContextDictionary:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000010006a238
- (void)reloadData;	// IMP=0x000000010006a234
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010006a1a8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010006a154
- (void)viewDidLoad;	// IMP=0x0000000100069fdc
- (id)songsRequest;	// IMP=0x0000000100069fd4
- (void)dealloc;	// IMP=0x0000000100069f0c
- (id)initWithContextDictionary:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000100069d04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

