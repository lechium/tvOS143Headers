/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSDictionary, NSString;

@interface WFDefaultShortcutPersonalizationContext : MTLModel <MTLJSONSerializing> {

	BOOL _userHasShortcutsInLibrary;
	BOOL _userHasShazamApp;
	BOOL _userHasQRCodeScannerInControlCenter;
	unsigned long long _mediaLibrarySongCount;
	unsigned long long _numberOfNotesCreatedInLast7Days;
	unsigned long long _numberOfScreenshotsSavedInLast15Days;
	unsigned long long _numberOfPhotosAirDroppedInLast15Days;
	unsigned long long _numberOfPhotosEditedInLast15Days;
	unsigned long long _numberOfCalendarEventsCreatedInLast15Days;
	unsigned long long _numberOfCalendarEventsWithEmailableAttendeesWithin7Days;
	unsigned long long _numberOfCalendarEventsWithPhysicalLocationsWithin7Days;

}

@property (assign,nonatomic) BOOL userHasShortcutsInLibrary;                                                          //@synthesize userHasShortcutsInLibrary=_userHasShortcutsInLibrary - In the implementation block
@property (assign,nonatomic) BOOL userHasShazamApp;                                                                   //@synthesize userHasShazamApp=_userHasShazamApp - In the implementation block
@property (assign,nonatomic) BOOL userHasQRCodeScannerInControlCenter;                                                //@synthesize userHasQRCodeScannerInControlCenter=_userHasQRCodeScannerInControlCenter - In the implementation block
@property (assign,nonatomic) unsigned long long mediaLibrarySongCount;                                                //@synthesize mediaLibrarySongCount=_mediaLibrarySongCount - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfNotesCreatedInLast7Days;                                      //@synthesize numberOfNotesCreatedInLast7Days=_numberOfNotesCreatedInLast7Days - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfScreenshotsSavedInLast15Days;                                 //@synthesize numberOfScreenshotsSavedInLast15Days=_numberOfScreenshotsSavedInLast15Days - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPhotosAirDroppedInLast15Days;                                 //@synthesize numberOfPhotosAirDroppedInLast15Days=_numberOfPhotosAirDroppedInLast15Days - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPhotosEditedInLast15Days;                                     //@synthesize numberOfPhotosEditedInLast15Days=_numberOfPhotosEditedInLast15Days - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCalendarEventsCreatedInLast15Days;                            //@synthesize numberOfCalendarEventsCreatedInLast15Days=_numberOfCalendarEventsCreatedInLast15Days - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCalendarEventsWithEmailableAttendeesWithin7Days;              //@synthesize numberOfCalendarEventsWithEmailableAttendeesWithin7Days=_numberOfCalendarEventsWithEmailableAttendeesWithin7Days - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCalendarEventsWithPhysicalLocationsWithin7Days;               //@synthesize numberOfCalendarEventsWithPhysicalLocationsWithin7Days=_numberOfCalendarEventsWithPhysicalLocationsWithin7Days - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(void)getCurrentUserContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)userHasShortcutsInLibrary;
-(void)setUserHasShortcutsInLibrary:(BOOL)arg1 ;
-(BOOL)userHasShazamApp;
-(void)setUserHasShazamApp:(BOOL)arg1 ;
-(BOOL)userHasQRCodeScannerInControlCenter;
-(void)setUserHasQRCodeScannerInControlCenter:(BOOL)arg1 ;
-(unsigned long long)mediaLibrarySongCount;
-(void)setMediaLibrarySongCount:(unsigned long long)arg1 ;
-(unsigned long long)numberOfNotesCreatedInLast7Days;
-(void)setNumberOfNotesCreatedInLast7Days:(unsigned long long)arg1 ;
-(unsigned long long)numberOfScreenshotsSavedInLast15Days;
-(void)setNumberOfScreenshotsSavedInLast15Days:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPhotosAirDroppedInLast15Days;
-(void)setNumberOfPhotosAirDroppedInLast15Days:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPhotosEditedInLast15Days;
-(void)setNumberOfPhotosEditedInLast15Days:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCalendarEventsCreatedInLast15Days;
-(void)setNumberOfCalendarEventsCreatedInLast15Days:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCalendarEventsWithEmailableAttendeesWithin7Days;
-(void)setNumberOfCalendarEventsWithEmailableAttendeesWithin7Days:(unsigned long long)arg1 ;
-(unsigned long long)numberOfCalendarEventsWithPhysicalLocationsWithin7Days;
-(void)setNumberOfCalendarEventsWithPhysicalLocationsWithin7Days:(unsigned long long)arg1 ;
@end
