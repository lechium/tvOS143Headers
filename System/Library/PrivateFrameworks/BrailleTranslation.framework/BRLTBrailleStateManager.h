/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol BRLTBrailleStateManagerDelegate, BRLTBrailleTranslationDelegateProtocol;
@class BRLTScriptString, BRLTBrailleBuffer, BRLTBrailleString, NSRecursiveLock, NSMutableArray;

@interface BRLTBrailleStateManager : NSObject <NSCopying> {

	BRLTScriptString* _scriptString;
	BRLTBrailleBuffer* _brailleBuffer;
	BRLTBrailleString* _staticBrailleString;
	NSRange _scriptForwardEditingRegion;
	NSRange _scriptBackwardEditingRegion;
	NSRange _scriptMergeEditingRegion;
	NSRange _brailleForwardEditingRegion;
	NSRange _brailleBackwardEditingRegion;
	NSRange _brailleMergeEditingRegion;
	NSRange _activeScriptEditingRegion;
	NSRange _activeBrailleEditingRegion;
	NSRange _brailleSelection;
	NSRange _brailleFocus;
	BOOL _brailleDirty;
	BOOL _scriptDirty;
	id<BRLTBrailleStateManagerDelegate> _delegate;
	id<BRLTBrailleTranslationDelegateProtocol> _translationDelegate;
	NSRange _pendingScriptSelection;
	NSRecursiveLock* _apiLock;
	NSMutableArray* _runningScriptStringHistory;
	double _lastScriptStringOutputTime;
	BOOL _editable;
	unsigned long long _inputTranslationMode;
	unsigned long long _outputTranslationMode;

}

@property (nonatomic,readonly) BRLTBrailleBuffer * brailleBuffer; 
@property (assign,nonatomic) BOOL editable;                                         //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) unsigned long long inputTranslationMode;               //@synthesize inputTranslationMode=_inputTranslationMode - In the implementation block
@property (assign,nonatomic) unsigned long long outputTranslationMode;              //@synthesize outputTranslationMode=_outputTranslationMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)translate;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)editable;
-(void)setTranslationDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 translationDelegate:(id)arg2 ;
-(void)setInputTranslationMode:(unsigned long long)arg1 ;
-(void)setOutputTranslationMode:(unsigned long long)arg1 ;
-(id)outputScriptString;
-(unsigned long long)inputTranslationMode;
-(unsigned long long)outputTranslationMode;
-(id)translationDelegate;
-(void)setScriptString:(id)arg1 ;
-(void)translateForced:(BOOL)arg1 ;
-(NSRange)scriptRangeOfBrailleCellRepresentingCharacterAtScriptIndex:(unsigned long long)arg1 ;
-(unsigned long long)scriptLocationForBrailleLocation:(unsigned long long)arg1 ;
-(NSRange)scriptRangeForBrailleRange:(NSRange)arg1 ;
-(NSRange)brailleFocus;
-(NSRange)brailleSelection;
-(id)brailleDisplayString;
-(BRLTBrailleBuffer *)brailleBuffer;
-(BOOL)deleteBrailleChar;
-(BOOL)deleteBrailleCharSilently;
-(BOOL)forwardDeleteBrailleCharSilently;
-(BOOL)forwardDeleteBrailleChar;
-(void)setBrailleSelection:(NSRange)arg1 ;
-(void)setBrailleSelection:(NSRange)arg1 needsForwardToScreenReader:(out BOOL*)arg2 newScriptLocation:(out unsigned long long*)arg3 ;
-(void)insertBrailleChar:(id)arg1 silently:(BOOL)arg2 ;
-(void)insertBrailleChar:(id)arg1 ;
-(void)_generateBrailleBufferForInsert;
-(BOOL)_generateBrailleBuffer:(BOOL)arg1 ;
-(NSRange)backwardEditingAtomForScriptString:(id)arg1 ;
-(BOOL)_deleteBrailleCharSilently:(BOOL)arg1 ;
-(BOOL)_selectionIsValidForDelete;
-(BOOL)_generateBrailleBufferForDelete;
-(BOOL)_forwardDeleteBrailleCharSilently:(BOOL)arg1 ;
-(BOOL)_setBrailleSelection:(NSRange)arg1 newScriptLocation:(out unsigned long long*)arg2 ;
-(NSRange)_textRangeForBrailleRange:(NSRange)arg1 textPositions:(id)arg2 scriptLength:(long long)arg3 ;
-(BOOL)_selectionIsValidForInsert;
-(NSRange)forwardEditingAtomForScriptString:(id)arg1 ;
-(NSRange)deleteMergeAtomForScriptString:(id)arg1 ;
-(NSRange)_brailleRangeForTextRange:(NSRange)arg1 textPositions:(id)arg2 brailleLength:(unsigned long long)arg3 ;
-(void)_translate:(BOOL)arg1 ;
-(NSRange)scriptEditingRange;
-(unsigned long long)brailleLocationForScriptLocation:(unsigned long long)arg1 ;
-(NSRange)brailleRangeForScriptRange:(NSRange)arg1 ;
@end

