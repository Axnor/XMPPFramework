#import <Foundation/Foundation.h>
#import <KissXML/KissXML.h>

@interface NSXMLElement (XEP_0335)

- (NSXMLElement *)JSONContainer;

- (BOOL)isJSONContainer;
- (BOOL)hasJSONContainer;

- (NSString *)JSONContainerString;
- (NSData *)JSONContainerData;
- (id)JSONContainerObject;

- (void)addJSONContainerWithString:(NSString *)JSONContainerString;
- (void)addJSONContainerWithData:(NSData *)JSONContainerData;
- (void)addJSONContainerWithObject:(id)JSONContainerObject;

@end
