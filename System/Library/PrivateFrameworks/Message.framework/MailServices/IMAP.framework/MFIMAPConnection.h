/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAP/IMAP-Structs.h>
#import <Message/MFConnection.h>

@protocol MFIMAPMailboxListFilter, MFCancelable;
@class NSString, NSMutableSet, NSArray, NSMutableData, MFInvocationQueue;

@interface MFIMAPConnection : MFConnection {

	id<MFIMAPMailboxListFilter> _mailboxListFilter;
	unsigned _capabilityFlags : 23;
	BOOL _gotBadResponse;
	int _tag;
	double _connectTime;
	unsigned _connectionState : 3;
	NSString* _separatorChar;
	NSString* _serverNamespace;
	NSString* _selectedMailbox;
	NSMutableSet* _capabilities;
	NSArray* _lastRequiredHeadersArray;
	NSString* _lastRequiredHeaders;
	unsigned _commandNumber;
	NSMutableData* _data;
	unsigned _readBufferSize;
	double _expirationTime;
	MFInvocationQueue* _streamEventQueue;
	NSArray* _additionalHeadersForFetch;
	unsigned _noModSequence : 1;
	SCD_Struct_MF0* _delegateState;
	unsigned long long _idleCommandSequenceNumber;
	id<MFCancelable> _idleSubscriptionCancelable;

}

@property (assign,nonatomic) unsigned long long idleCommandSequenceNumber;              //@synthesize idleCommandSequenceNumber=_idleCommandSequenceNumber - In the implementation block
@property (nonatomic,retain) id<MFCancelable> idleSubscriptionCancelable;               //@synthesize idleSubscriptionCancelable=_idleSubscriptionCancelable - In the implementation block
@property (assign,nonatomic,__weak) id<MFIMAPConnectionDelegate> delegate; 
@property (assign,nonatomic) int tag;                                                   //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) double connectTime;                                      //@synthesize connectTime=_connectTime - In the implementation block
@property (nonatomic,readonly) BOOL gotBadResponse;                                     //@synthesize gotBadResponse=_gotBadResponse - In the implementation block
@property (copy) NSArray * additionalHeadersForFetch; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isIdle,nonatomic,readonly) BOOL idle; 
+(void)initialize;
+(void)setReadSizeParameters;
+(id)_UIDPlusInfoFromIMAPResponses:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)lock;
-(BOOL)isValid;
-(void)close;
-(id<MFIMAPConnectionDelegate>)delegate;
-(void)setDelegate:(id<MFIMAPConnectionDelegate>)arg1 ;
-(void)disconnect;
-(int)tag;
-(id)capabilities;
-(void)setTag:(int)arg1 ;
-(int)connectionState;
-(BOOL)isIdle;
-(BOOL)supportsCapability:(int)arg1 ;
-(id)copyDiagnosticInformation;
-(BOOL)authenticateUsingAccount:(id)arg1 ;
-(BOOL)deleteMailbox:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg1 ;
-(BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2 ;
-(void)noop;
-(BOOL)loginDisabled;
-(BOOL)startTLSForAccount:(id)arg1 ;
-(BOOL)logout;
-(id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)arg1 ;
-(id)_fetchArgumentForMessageUidsAndFlags;
-(BOOL)_isFetchResponseValid:(id)arg1 ;
-(id)_responseFromSendingCommands:(SCD_Struct_MF2*)arg1 count:(unsigned long long)arg2 ;
-(void)setReadBufferSizeFromElapsedTime:(double)arg1 bytesRead:(unsigned long long)arg2 ;
-(void)didFinishCommands:(SCD_Struct_MF2*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)idleCommandSequenceNumber;
-(void)_addCapabilities:(id)arg1 ;
-(id)parenthesizedStringWithObjects:(id)arg1 ;
-(void)disconnectAndNotifyDelegate:(BOOL)arg1 ;
-(id)_copyNextServerResponseForCommand:(SCD_Struct_MF2*)arg1 ;
-(void)_clearCapabilities;
-(BOOL)_doBasicConnectionUsingAccount:(id)arg1 ;
-(void)_updateCapabilitiesForAccount:(id)arg1 withAuthenticationResponse:(id)arg2 ;
-(BOOL)_tryConnectionUsingAccount:(id)arg1 ;
-(void)locked_finishIdle;
-(int)fillLiteralBuffer:(char*)arg1 count:(unsigned long long)arg2 dataLength:(unsigned long long)arg3 nonSynchronizingLiteral:(BOOL*)arg4 ;
-(id)_copyNextTaggedOrContinuationResponseForCommand:(SCD_Struct_MF2*)arg1 ;
-(void)_fetchCapabilities;
-(BOOL)loginWithAccount:(id)arg1 password:(id)arg2 ;
-(void)_sendApplePushForAccountIfSupported:(id)arg1 ;
-(void)_sendClientInfoIfSupported;
-(void)_enableCompressionIfSupported;
-(id)_serverErrorForAccount:(id)arg1 response:(id)arg2 command:(SCD_Struct_MF2*)arg3 ;
-(int)_doIMAPLoginForAccount:(id)arg1 quotedUsername:(id)arg2 password:(id)arg3 ;
-(unsigned long long)_sendCommands:(SCD_Struct_MF2*)arg1 count:(unsigned long long)arg2 response:(id*)arg3 ;
-(id)_doListCommand:(int)arg1 withReference:(id)arg2 mailboxName:(id)arg3 options:(int)arg4 getSpecialUse:(BOOL)arg5 statusDataItems:(id)arg6 statusEntriesByMailbox:(id*)arg7 ;
-(id)_doNamespaceCommand;
-(id)separatorChar;
-(id)_listingForMailbox:(id)arg1 options:(int)arg2 getSpecialUse:(BOOL)arg3 statusDataItems:(id)arg4 statusEntriesByMailbox:(id*)arg5 withCommand:(int)arg6 ;
-(void)handleBytesAvailable;
-(void)handleStreamEvent:(unsigned long long)arg1 ;
-(void)locked_scheduleIdleResetAfterDelay:(double)arg1 ;
-(id<MFCancelable>)idleSubscriptionCancelable;
-(void)locked_startIdle;
-(void)setIdleSubscriptionCancelable:(id<MFCancelable>)arg1 ;
-(id)_errorForResponse:(id)arg1 commandParams:(SCD_Struct_MF2*)arg2 ;
-(id)messageSetForNumbers:(id)arg1 ;
-(void)updateSearchCapability;
-(BOOL)_sendMailboxCommand:(int)arg1 withArguments:(id)arg2 ;
-(id)eSearchIDSet:(id)arg1 areMessageSequenceNumbers:(BOOL)arg2 forTerms:(id)arg3 success:(BOOL*)arg4 returning:(int)arg5 ;
-(id)searchIDSet:(id)arg1 forTerms:(id)arg2 success:(BOOL*)arg3 ;
-(id)searchUidSet:(id)arg1 forTerms:(id)arg2 success:(BOOL*)arg3 ;
-(unsigned long long)countForSearchOfIDSet:(id)arg1 forTerms:(id)arg2 success:(BOOL*)arg3 ;
-(id)copyArgumentForSearchTerm:(id)arg1 ;
-(BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forMessageSet:(id)arg3 ;
-(id)messageSetForRange:(SCD_Struct_MF3)arg1 ;
-(BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forUids:(id)arg3 ;
-(BOOL)createMailbox:(id)arg1 ;
-(id)_responseFromSendingCommand:(SCD_Struct_MF2*)arg1 andPossiblyCreateMailbox:(id)arg2 ;
-(id)_headersToFetchIncludingThoseRequiredForRouting:(BOOL)arg1 withRecipients:(BOOL)arg2 ;
-(BOOL)_doUidFetchWithRange:(SCD_Struct_MF3)arg1 arguments:(id)arg2 validateMessage:(BOOL)arg3 responses:(id)arg4 ;
-(unsigned)readBufferSize;
-(void)setReadBufferSize:(unsigned)arg1 ;
-(id)messageSetForNumbers:(id)arg1 range:(NSRange)arg2 maxTokens:(unsigned long long)arg3 indexOfLastNumber:(unsigned long long*)arg4 ;
-(id)messageSetForNumbers:(id)arg1 range:(NSRange)arg2 ;
-(void)locked_scheduleIdle;
-(BOOL)sendResponsesForCommand:(SCD_Struct_MF2*)arg1 toQueue:(id)arg2 ;
-(id)fetchArgumentForMessageSkeletonsWithTo:(BOOL)arg1 ;
-(BOOL)sendResponsesForUIDFetchForUIDs:(id)arg1 fields:(id)arg2 toQueue:(id)arg3 ;
-(BOOL)sendResponsesForCondStoreFlagFetchForUIDs:(id)arg1 withSequenceIdentifier:(id*)arg2 toQueue:(id)arg3 ;
-(BOOL)sendResponsesForUIDs:(id)arg1 fields:(id)arg2 flagSearchResults:(id)arg3 toQueue:(id)arg4 ;
-(id)eSearchIDSet:(id)arg1 areMessageSequenceNumbers:(BOOL)arg2 arguments:(id)arg3 success:(BOOL*)arg4 returning:(int)arg5 ;
-(id)mailboxListFilter;
-(void)setMailboxListFilter:(id)arg1 ;
-(id)serverPathPrefix;
-(id)listingForMailbox:(id)arg1 options:(int)arg2 getSpecialUse:(BOOL)arg3 statusDataItems:(id)arg4 statusEntriesByMailbox:(id*)arg5 ;
-(id)subscribedListingForMailbox:(id)arg1 options:(int)arg2 ;
-(BOOL)closeAndLogout;
-(void)unselect;
-(void)finishIdle;
-(void)scheduleIdleReset;
-(BOOL)expunge;
-(BOOL)expungeUids:(id)arg1 ;
-(void)fetchStatusForMailboxes:(id)arg1 args:(id)arg2 ;
-(BOOL)examineMailbox:(id)arg1 ;
-(BOOL)selectMailbox:(id)arg1 ;
-(id)selectedMailbox;
-(BOOL)renameMailbox:(id)arg1 toMailbox:(id)arg2 ;
-(BOOL)subscribeMailbox:(id)arg1 ;
-(BOOL)unsubscribeMailbox:(id)arg1 ;
-(BOOL)getQuotaForRootName:(id)arg1 ;
-(id)quotaPercentagesForMailbox:(id)arg1 ;
-(unsigned long long)countForSearchOfUidSet:(id)arg1 forTerms:(id)arg2 success:(BOOL*)arg3 ;
-(unsigned)getMailboxIDForUID:(unsigned)arg1 ;
-(id)searchUidSet:(id)arg1 forNewMessageIDs:(id)arg2 ;
-(BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forRange:(SCD_Struct_MF3)arg3 ;
-(BOOL)deleteMessagesOlderThanNumberOfDays:(int)arg1 ;
-(BOOL)copyUids:(id)arg1 toMailboxNamed:(id)arg2 newMessageInfo:(id*)arg3 ;
-(BOOL)appendData:(id)arg1 toMailboxNamed:(id)arg2 flags:(id)arg3 dateReceived:(id)arg4 newMessageInfo:(id*)arg5 ;
-(NSArray *)additionalHeadersForFetch;
-(void)setAdditionalHeadersForFetch:(NSArray *)arg1 ;
-(void)fetchTotalSize:(unsigned long long*)arg1 andMessageCount:(unsigned*)arg2 ;
-(id)fetchHeadersForUid:(unsigned)arg1 ;
-(id)fetchMessageIdsForUids:(id)arg1 ;
-(id)fetchUniqueRemoteIDsForUids:(id)arg1 ;
-(BOOL)performCustomCommand:(id)arg1 withArguments:(id)arg2 ;
-(id)messageSetForRange:(SCD_Struct_MF3)arg1 butNotNumbers:(id)arg2 ;
-(void)notifyDelegateOfBodyLoadStart:(id)arg1 section:(id)arg2 ;
-(void)notifyDelegateOfBodyLoadAppendage:(id)arg1 section:(id)arg2 ;
-(void)notifyDelegateOfBodyLoadCompletion:(id)arg1 section:(id)arg2 ;
-(unsigned)literalChunkSize;
-(id)_readDataOfLength:(long long)arg1 ;
-(BOOL)sendSkeletonResponsesForUIDs:(id)arg1 includeTo:(BOOL)arg2 toQueue:(id)arg3 ;
-(BOOL)sendUidAndFlagResponsesForUIDs:(id)arg1 sequenceIdentifierProvider:(id)arg2 flagSearchResults:(id)arg3 toQueue:(id)arg4 ;
-(BOOL)sendUidResponsesForSearchArguments:(id)arg1 toQueue:(id)arg2 ;
-(id)searchUIDs:(id)arg1 withFlagRequests:(id)arg2 ;
-(double)connectTime;
-(BOOL)gotBadResponse;
-(void)setIdleCommandSequenceNumber:(unsigned long long)arg1 ;
-(void)parseESearchResponseWithContext:(id)arg1 ;
-(id)_uidsForMessageIDs:(id)arg1 excludeDeleted:(BOOL)arg2 ;
-(long long)moveUIDSet:(id)arg1 toMailboxNamed:(id)arg2 newMessageInfo:(id*)arg3 ;
-(long long)_moveMessageSet:(id)arg1 toMailboxName:(id)arg2 command:(int)arg3 newMessageInfo:(id*)arg4 ;
-(long long)moveSequenceSet:(id)arg1 toMailboxName:(id)arg2 newMessageInfo:(id*)arg3 ;
-(id)parseIndexSetFromSequenceSet:(id)arg1 ;
-(void)parseSearchReturn:(id)arg1 ;
-(id)_messageIDsFromFetchResultData:(id)arg1 ;
-(id)_searchUidsForMessageIDs:(id)arg1 excludeDeleted:(BOOL)arg2 ;
-(id)_getReferencesForMessageSet:(id)arg1 ;
-(id)_getFirstLevelMessageIDsForReference:(id)arg1 ;
-(id)uidsReferencedBy:(id)arg1 ;
@end

