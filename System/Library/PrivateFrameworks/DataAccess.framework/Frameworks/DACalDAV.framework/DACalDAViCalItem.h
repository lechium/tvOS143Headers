/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CoreDAVLeafDataPayload.h>
#import <DACalDAV/DADataElement.h>
#import <libobjc.A.dylib/CalDAVCalendarItemProtocol.h>

@class NSURL, NSData, NSString, NSArray, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem, NSMutableDictionary, NSNumber, ICSDocument;

@interface DACalDAViCalItem : NSObject <CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol> {

	NSString* _scheduleTag;
	NSMutableDictionary* _originatingChangeItems;
	NSData* _dataPayload;
	BOOL _isMigrate;
	BOOL _prohibitLocalCreationOfServerID;
	BOOL _statusChanged;
	NSString* _syncKey;
	CalDAVCalendarServerScheduleChangesItem* _scheduleChanges;
	NSURL* _serverID;
	NSNumber* _clientID;
	void* _calItem;
	ICSDocument* _document;
	CalDAVUpdateOwnerItem* _createdBy;
	CalDAVUpdateOwnerItem* _updatedBy;
	NSString* _uniqueIdentifier;
	NSString* _filename;

}

@property (nonatomic,retain) NSString * syncKey;                                                     //@synthesize syncKey=_syncKey - In the implementation block
@property (nonatomic,retain) NSData * dataPayload;                                                   //@synthesize dataPayload=_dataPayload - In the implementation block
@property (nonatomic,retain) ICSDocument * document;                                                 //@synthesize document=_document - In the implementation block
@property (assign,nonatomic) BOOL statusChanged;                                                     //@synthesize statusChanged=_statusChanged - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSString * filename;                                                    //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSURL * serverID;                                                       //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,retain) NSNumber * clientID;                                                    //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) void* calItem;                                                        //@synthesize calItem=_calItem - In the implementation block
@property (nonatomic,retain) NSString * scheduleTag; 
@property (nonatomic,retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges;              //@synthesize scheduleChanges=_scheduleChanges - In the implementation block
@property (nonatomic,retain) CalDAVUpdateOwnerItem * createdBy;                                      //@synthesize createdBy=_createdBy - In the implementation block
@property (nonatomic,retain) CalDAVUpdateOwnerItem * updatedBy;                                      //@synthesize updatedBy=_updatedBy - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * originatingChangeItems; 
@property (assign,nonatomic) BOOL isMigrate;                                                         //@synthesize isMigrate=_isMigrate - In the implementation block
@property (nonatomic,readonly) BOOL invitationStatusCleared; 
@property (assign,nonatomic) BOOL prohibitLocalCreationOfServerID;                                   //@synthesize prohibitLocalCreationOfServerID=_prohibitLocalCreationOfServerID - In the implementation block
@property (nonatomic,readonly) NSArray * childrenOrder; 
@property (nonatomic,retain) NSURL * sourceURL; 
@property (nonatomic,retain) NSURL * destinationURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldApplyEvent:(id)arg1 instanceWithStartDate:(id)arg2 startRange:(id)arg3 endRange:(id)arg4 ;
+(BOOL)_checkOccurrencesForEvent:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
+(BOOL)_shouldApplyEventFromSyncReport:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(NSString *)description;
-(void)dealloc;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSNumber *)clientID;
-(void)setServerID:(NSURL *)arg1 ;
-(NSURL *)serverID;
-(void)setClientID:(NSNumber *)arg1 ;
-(ICSDocument *)document;
-(void)setDocument:(ICSDocument *)arg1 ;
-(NSString *)syncKey;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(NSData *)dataPayload;
-(void)setDataPayload:(NSData *)arg1 ;
-(BOOL)statusChanged;
-(void)setStatusChanged:(BOOL)arg1 ;
-(NSString *)scheduleTag;
-(void)setScheduleTag:(NSString *)arg1 ;
-(void)setScheduleChanges:(CalDAVCalendarServerScheduleChangesItem *)arg1 ;
-(void)setCreatedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(void)setUpdatedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(CalDAVCalendarServerScheduleChangesItem *)scheduleChanges;
-(CalDAVUpdateOwnerItem *)createdBy;
-(CalDAVUpdateOwnerItem *)updatedBy;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 calendar:(id)arg6 ;
-(void)setSyncKey:(NSString *)arg1 ;
-(id)initWithCalRecord:(void*)arg1 inContainer:(id)arg2 ;
-(void)addChangeOfType:(id)arg1 forChangeRowid:(int)arg2 ;
-(NSMutableDictionary *)originatingChangeItems;
-(void*)calItem;
-(void)setOriginatingChangeItems:(NSMutableDictionary *)arg1 ;
-(BOOL)prohibitLocalCreationOfServerID;
-(void)setProhibitLocalCreationOfServerID:(BOOL)arg1 ;
-(BOOL)invitationStatusCleared;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(void)setIsMigrate:(BOOL)arg1 ;
-(void)setLocalItem:(void*)arg1 ;
-(id)_getDetachedEventUniqueIdentifiersForCalEvent:(void*)arg1 ;
-(void)_setModificationInfoOnItem:(void*)arg1 ;
-(void)_removeCalEvent:(void*)arg1 fromUniqueIdentifiersSet:(id)arg2 ;
-(void)_removeDetachedEventsWithUniqueIdentifiers:(id)arg1 fromEvent:(void*)arg2 withContainer:(void*)arg3 ;
-(BOOL)_addOrModifyEvent:(id)arg1 inICSCalendar:(id)arg2 withContainer:(void*)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 inMobileCalendar:(id)arg6 ;
-(BOOL)_addOrModifyTask:(id)arg1 inICSCalendar:(id)arg2 withContainer:(void*)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 inMobileCalendar:(id)arg6 ;
-(BOOL)isMigrate;
-(void)_fixUpCalendarForServer:(id)arg1 ;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(void*)localItem;
@end

