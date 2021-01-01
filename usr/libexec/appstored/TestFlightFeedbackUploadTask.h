//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class BetaAppFeedbackMemoryEntity, TestFlightFeedbackDatabaseStore;

@interface TestFlightFeedbackUploadTask : Task
{
    TestFlightFeedbackDatabaseStore *_dataStore;	// 8 = 0x8
    BetaAppFeedbackMemoryEntity *_entity;	// 16 = 0x10
    TestFlightFeedbackDatabaseStore *_databaseStore;	// 24 = 0x18
}

+ (id)taskWithDatabaseStore:(id)arg1 andEntity:(id)arg2;	// IMP=0x0000000100132c60
- (void).cxx_destruct;	// IMP=0x0000000100134184
@property(retain, nonatomic) TestFlightFeedbackDatabaseStore *databaseStore; // @synthesize databaseStore=_databaseStore;
@property(readonly, nonatomic) BetaAppFeedbackMemoryEntity *entity; // @synthesize entity=_entity;
- (void)_uploadImagesForFeedbackEntity:(id)arg1;	// IMP=0x0000000100133bbc
- (void)_updateEntity:(id)arg1 shouldContinue:(_Bool)arg2;	// IMP=0x0000000100133980
- (void)_submitFeedbackEntity:(id)arg1;	// IMP=0x00000001001336ec
- (void)_markHasSharedFeedbackForEntity:(id)arg1;	// IMP=0x00000001001335b0
- (void)_fetchImageUploadURLsForFeedbackEntity:(id)arg1;	// IMP=0x0000000100132f84
- (void)_continueFeedbackSubmissionForFeedbackEntity:(id)arg1;	// IMP=0x0000000100132f28
- (void)main;	// IMP=0x0000000100132d68
- (id)initWithEntity:(id)arg1;	// IMP=0x0000000100132ce8

@end

