/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTIInputSystemSessionDelegate;
@class NSUUID, RTIDocumentTraits, RTIDocumentState, RTITextOperations, NSHashTable;

@interface RTIInputSystemSession : NSObject {

	NSUUID* _uuid;
	RTIDocumentTraits* _documentTraits;
	RTIDocumentState* _documentState;
	RTITextOperations* _textOperations;
	NSHashTable* _extraSessionDelegates;
	id<RTIInputSystemSessionDelegate> _sessionDelegate;

}

@property (nonatomic,retain) NSHashTable * extraSessionDelegates;                                   //@synthesize extraSessionDelegates=_extraSessionDelegates - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) RTIDocumentTraits * documentTraits;                                    //@synthesize documentTraits=_documentTraits - In the implementation block
@property (nonatomic,retain) RTIDocumentState * documentState;                                      //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) RTITextOperations * textOperations;                                    //@synthesize textOperations=_textOperations - In the implementation block
@property (nonatomic,readonly) RTITextOperations * _textOperations; 
@property (assign,nonatomic,__weak) id<RTIInputSystemSessionDelegate> sessionDelegate;              //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(RTIDocumentState *)documentState;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(RTITextOperations *)textOperations;
-(void)setTextOperations:(RTITextOperations *)arg1 ;
-(void)setSessionDelegate:(id<RTIInputSystemSessionDelegate>)arg1 ;
-(void)flushOperations;
-(RTIDocumentTraits *)documentTraits;
-(id<RTIInputSystemSessionDelegate>)sessionDelegate;
-(void)removeSessionDelegate:(id)arg1 ;
-(void)addSessionDelegate:(id)arg1 ;
-(void)_applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2 ;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
-(RTITextOperations *)_textOperations;
-(void)enumerateSessionDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)_createTextOperationsIfNecessary;
-(void)applyLocalTextOperations:(id)arg1 toDocumentState:(id)arg2 ;
-(NSHashTable *)extraSessionDelegates;
-(void)setExtraSessionDelegates:(NSHashTable *)arg1 ;
@end

