/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFRecord.h>
#import <libobjc.A.dylib/VCPBCodable.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, WFWorkflowIcon, NSDate, WFWorkflowQuarantine, NSArray, NSSet, NSData;

@interface WFWorkflowRecord : WFRecord <VCPBCodable, WFNaming> {

	BOOL _hiddenInComplication;
	BOOL _hiddenFromLibraryAndSync;
	BOOL _deleted;
	BOOL _conflictOfOtherWorkflow;
	NSString* _name;
	NSString* _legacyName;
	WFWorkflowIcon* _icon;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _workflowSubtitle;
	NSString* _actionsDescription;
	NSString* _associatedAppBundleIdentifier;
	NSString* _galleryIdentifier;
	NSString* _source;
	WFWorkflowQuarantine* _quarantine;
	NSArray* _workflowTypes;
	NSArray* _inputClasses;
	NSArray* _actions;
	long long _actionCount;
	NSArray* _importQuestions;
	NSString* _minimumClientVersion;
	NSString* _lastMigratedClientVersion;
	long long _lastSyncedHash;
	NSString* _lastSavedOnDeviceName;
	unsigned long long _estimatedSize;
	NSSet* _accessResourcePerWorkflowStates;
	long long _remoteQuarantineStatus;
	NSData* _cloudKitRecordMetadata;
	long long _syncHash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (nonatomic,copy) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * legacyName;                                                          //@synthesize legacyName=_legacyName - In the implementation block
@property (nonatomic,retain) WFWorkflowIcon * icon;                                                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                                        //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy) NSString * workflowSubtitle;                                                    //@synthesize workflowSubtitle=_workflowSubtitle - In the implementation block
@property (nonatomic,copy) NSString * actionsDescription;                                                  //@synthesize actionsDescription=_actionsDescription - In the implementation block
@property (nonatomic,copy) NSString * associatedAppBundleIdentifier;                                       //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * galleryIdentifier;                                                   //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * source;                                                              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) WFWorkflowQuarantine * quarantine;                                            //@synthesize quarantine=_quarantine - In the implementation block
@property (nonatomic,copy) NSArray * workflowTypes;                                                        //@synthesize workflowTypes=_workflowTypes - In the implementation block
@property (nonatomic,copy) NSArray * inputClasses;                                                         //@synthesize inputClasses=_inputClasses - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                                              //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) long long actionCount;                                                        //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,copy) NSArray * importQuestions;                                                      //@synthesize importQuestions=_importQuestions - In the implementation block
@property (nonatomic,copy) NSString * minimumClientVersion;                                                //@synthesize minimumClientVersion=_minimumClientVersion - In the implementation block
@property (assign,nonatomic) BOOL hiddenInComplication;                                                    //@synthesize hiddenInComplication=_hiddenInComplication - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromLibraryAndSync;                                                //@synthesize hiddenFromLibraryAndSync=_hiddenFromLibraryAndSync - In the implementation block
@property (assign,getter=isDeleted,nonatomic) BOOL deleted;                                                //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy) NSString * lastMigratedClientVersion;                                           //@synthesize lastMigratedClientVersion=_lastMigratedClientVersion - In the implementation block
@property (assign,nonatomic) long long lastSyncedHash;                                                     //@synthesize lastSyncedHash=_lastSyncedHash - In the implementation block
@property (nonatomic,copy) NSString * lastSavedOnDeviceName;                                               //@synthesize lastSavedOnDeviceName=_lastSavedOnDeviceName - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedSize;                                           //@synthesize estimatedSize=_estimatedSize - In the implementation block
@property (nonatomic,copy) NSSet * accessResourcePerWorkflowStates;                                        //@synthesize accessResourcePerWorkflowStates=_accessResourcePerWorkflowStates - In the implementation block
@property (assign,nonatomic) long long remoteQuarantineStatus;                                             //@synthesize remoteQuarantineStatus=_remoteQuarantineStatus - In the implementation block
@property (getter=isConflictOfOtherWorkflow,nonatomic,readonly) BOOL conflictOfOtherWorkflow;              //@synthesize conflictOfOtherWorkflow=_conflictOfOtherWorkflow - In the implementation block
@property (nonatomic,copy) NSData * cloudKitRecordMetadata;                                                //@synthesize cloudKitRecordMetadata=_cloudKitRecordMetadata - In the implementation block
@property (assign,nonatomic) long long syncHash;                                                           //@synthesize syncHash=_syncHash - In the implementation block
+(id)defaultPropertyValues;
+(id)workflowSubtitleForActionCount:(unsigned long long)arg1 savedSubtitle:(id)arg2 ;
-(BOOL)writeTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)readFrom:(id)arg1 error:(id*)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)source;
-(NSDate *)creationDate;
-(void)setSource:(NSString *)arg1 ;
-(NSDate *)modificationDate;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(WFWorkflowIcon *)icon;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(BOOL)isDeleted;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSArray *)inputClasses;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSString *)associatedAppBundleIdentifier;
-(long long)syncHash;
-(unsigned long long)estimatedSize;
-(NSString *)wfName;
-(NSArray *)workflowTypes;
-(BOOL)hiddenFromLibraryAndSync;
-(void)setActionCount:(long long)arg1 ;
-(long long)actionCount;
-(NSString *)galleryIdentifier;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(id)fileRepresentation;
-(BOOL)addWatchWorkflowTypeIfEligible;
-(long long)lastSyncedHash;
-(void)setCloudKitRecordMetadata:(NSData *)arg1 ;
-(NSData *)cloudKitRecordMetadata;
-(BOOL)isEquivalentForSyncTo:(id)arg1 ;
-(void)setLastSyncedHash:(long long)arg1 ;
-(long long)remoteQuarantineStatus;
-(void)setRemoteQuarantineStatus:(long long)arg1 ;
-(void)setWorkflowTypes:(NSArray *)arg1 ;
-(void)setInputClasses:(NSArray *)arg1 ;
-(NSString *)minimumClientVersion;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(NSString *)lastMigratedClientVersion;
-(void)setLastMigratedClientVersion:(NSString *)arg1 ;
-(NSString *)actionsDescription;
-(NSString *)workflowSubtitle;
-(NSSet *)accessResourcePerWorkflowStates;
-(void)setImportQuestions:(NSArray *)arg1 ;
-(NSArray *)importQuestions;
-(void)setWorkflowSubtitle:(NSString *)arg1 ;
-(void)setAccessResourcePerWorkflowStates:(NSSet *)arg1 ;
-(BOOL)loadFromPeaceData:(id)arg1 keyImageData:(id)arg2 error:(id*)arg3 ;
-(id)initWithPeaceCloudKitRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithPeaceCoreDataModel:(id)arg1 error:(id*)arg2 ;
-(void)setHiddenFromLibraryAndSync:(BOOL)arg1 ;
-(BOOL)isConflictOfOtherWorkflow;
-(BOOL)isEligibleForWatch;
-(void)addWatchWorkflowType;
-(BOOL)saveChangesToStorage:(id)arg1 error:(id*)arg2 ;
-(WFWorkflowQuarantine *)quarantine;
-(void)setQuarantine:(WFWorkflowQuarantine *)arg1 ;
-(void)setAssociatedAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)lastSavedOnDeviceName;
-(void)setLastSavedOnDeviceName:(NSString *)arg1 ;
-(NSString *)legacyName;
-(void)setLegacyName:(NSString *)arg1 ;
-(BOOL)hiddenInComplication;
-(void)setHiddenInComplication:(BOOL)arg1 ;
-(void)setActionsDescription:(NSString *)arg1 ;
-(void)setSyncHash:(long long)arg1 ;
-(BOOL)isEligibleForWatchWithIneligibleActionIdentifiers:(id)arg1 ;
-(BOOL)addWatchWorkflowTypeIfEligibleWithIneligibleActionIdentifiers:(id)arg1 ;
@end

