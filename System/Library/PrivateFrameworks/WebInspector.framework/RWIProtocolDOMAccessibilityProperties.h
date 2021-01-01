/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDOMAccessibilityProperties : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL exists; 
@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic) int nodeId; 
@property (nonatomic,copy) NSString * role; 
@property (assign,nonatomic) int activeDescendantNodeId; 
@property (assign,nonatomic) BOOL busy; 
@property (assign,nonatomic) long long checked; 
@property (nonatomic,copy) NSArray * childNodeIds; 
@property (nonatomic,copy) NSArray * controlledNodeIds; 
@property (assign,nonatomic) long long current; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) double headingLevel; 
@property (assign,nonatomic) double hierarchyLevel; 
@property (assign,nonatomic) BOOL isPopUpButton; 
@property (assign,nonatomic) BOOL expanded; 
@property (nonatomic,copy) NSArray * flowedNodeIds; 
@property (assign,nonatomic) BOOL focused; 
@property (assign,nonatomic) BOOL ignored; 
@property (assign,nonatomic) BOOL ignoredByDefault; 
@property (assign,nonatomic) long long invalid; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL liveRegionAtomic; 
@property (nonatomic,copy) NSArray * liveRegionRelevant; 
@property (assign,nonatomic) long long liveRegionStatus; 
@property (assign,nonatomic) int mouseEventNodeId; 
@property (nonatomic,copy) NSArray * ownedNodeIds; 
@property (assign,nonatomic) int parentNodeId; 
@property (assign,nonatomic) BOOL pressed; 
@property (assign,nonatomic) BOOL readonly; 
@property (assign,nonatomic) BOOL required; 
@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,copy) NSArray * selectedChildNodeIds; 
-(long long)current;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)required;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(NSString *)role;
-(void)setRole:(NSString *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)setIgnored:(BOOL)arg1 ;
-(BOOL)ignored;
-(long long)checked;
-(void)setChecked:(long long)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(BOOL)exists;
-(BOOL)busy;
-(void)setCurrent:(long long)arg1 ;
-(BOOL)expanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setExists:(BOOL)arg1 ;
-(long long)invalid;
-(void)setInvalid:(long long)arg1 ;
-(int)nodeId;
-(BOOL)pressed;
-(void)setPressed:(BOOL)arg1 ;
-(void)setNodeId:(int)arg1 ;
-(id)initWithExists:(BOOL)arg1 label:(id)arg2 nodeId:(int)arg3 role:(id)arg4 ;
-(void)setActiveDescendantNodeId:(int)arg1 ;
-(int)activeDescendantNodeId;
-(void)setBusy:(BOOL)arg1 ;
-(void)setChildNodeIds:(NSArray *)arg1 ;
-(NSArray *)childNodeIds;
-(void)setControlledNodeIds:(NSArray *)arg1 ;
-(NSArray *)controlledNodeIds;
-(void)setHeadingLevel:(double)arg1 ;
-(double)headingLevel;
-(void)setHierarchyLevel:(double)arg1 ;
-(double)hierarchyLevel;
-(void)setIsPopUpButton:(BOOL)arg1 ;
-(BOOL)isPopUpButton;
-(void)setFlowedNodeIds:(NSArray *)arg1 ;
-(NSArray *)flowedNodeIds;
-(void)setFocused:(BOOL)arg1 ;
-(BOOL)focused;
-(void)setIgnoredByDefault:(BOOL)arg1 ;
-(BOOL)ignoredByDefault;
-(void)setLiveRegionAtomic:(BOOL)arg1 ;
-(BOOL)liveRegionAtomic;
-(void)setLiveRegionRelevant:(NSArray *)arg1 ;
-(NSArray *)liveRegionRelevant;
-(void)setLiveRegionStatus:(long long)arg1 ;
-(long long)liveRegionStatus;
-(void)setMouseEventNodeId:(int)arg1 ;
-(int)mouseEventNodeId;
-(void)setOwnedNodeIds:(NSArray *)arg1 ;
-(NSArray *)ownedNodeIds;
-(void)setParentNodeId:(int)arg1 ;
-(int)parentNodeId;
-(void)setReadonly:(BOOL)arg1 ;
-(BOOL)readonly;
-(void)setSelectedChildNodeIds:(NSArray *)arg1 ;
-(NSArray *)selectedChildNodeIds;
@end

