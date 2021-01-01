/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned topicContainingRuleCount : 1;
	unsigned topicRulesCardinality : 1;
	unsigned personAndAppMatched : 1;
	unsigned personMatched : 1;
	unsigned topicInContext : 1;
	unsigned topicInRule : 1;
	unsigned topicOverlap : 1;
} SCD_Struct_Co2;

typedef struct {
	unsigned averageBehavioralRuleConfidence : 1;
	unsigned averageBehavioralRuleConviction : 1;
	unsigned averageBehavioralRuleLift : 1;
	unsigned averageBehavioralRuleMLScore : 1;
	unsigned averageBehavioralRulePowerFactor : 1;
	unsigned averageBehavioralRuleSupport : 1;
	unsigned interactionModelScore : 1;
	unsigned maximumBehavioralRuleConfidence : 1;
	unsigned maximumBehavioralRuleConviction : 1;
	unsigned maximumBehavioralRuleLift : 1;
	unsigned maximumBehavioralRuleMLScore : 1;
	unsigned maximumBehavioralRulePowerFactor : 1;
	unsigned maximumBehavioralRuleSupport : 1;
	unsigned minimumBehavioralRuleConfidence : 1;
	unsigned minimumBehavioralRuleConviction : 1;
	unsigned minimumBehavioralRuleLift : 1;
	unsigned minimumBehavioralRuleMLScore : 1;
	unsigned minimumBehavioralRulePowerFactor : 1;
	unsigned minimumBehavioralRuleSupport : 1;
	unsigned stdevBehavioralRuleConfidence : 1;
	unsigned stdevBehavioralRuleConviction : 1;
	unsigned stdevBehavioralRuleLift : 1;
	unsigned stdevBehavioralRuleMLScore : 1;
	unsigned stdevBehavioralRulePowerFactor : 1;
	unsigned stdevBehavioralRuleSupport : 1;
	unsigned normalizedIncomingCallFrequency : 1;
	unsigned normalizedOutgoingCallFrequency : 1;
	unsigned numberOfBehavioralRulesAdvocating : 1;
	unsigned timeSinceLastContactViaIncomingCall : 1;
	unsigned timeSinceLastContactViaOutgoingCall : 1;
} SCD_Struct_CA3;

typedef struct {
	unsigned highConfidenceRuleCount : 1;
	unsigned lowConfidenceRuleCount : 1;
	unsigned mediumConfidenceRuleCount : 1;
} SCD_Struct_CA4;

typedef struct {
	float list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_Co5;

